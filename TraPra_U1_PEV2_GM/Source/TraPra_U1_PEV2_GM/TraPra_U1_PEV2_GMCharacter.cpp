// Copyright Epic Games, Inc. All Rights Reserved.

#include "TraPra_U1_PEV2_GMCharacter.h" // Incluye el header de la clase para poder definir sus funciones
#include "Engine/LocalPlayer.h"  // Permite acceder a informacion del jugador local
#include "Camera/CameraComponent.h" // Necesario para usar la camara en tercera persona
#include "Components/CapsuleComponent.h"  // Necesario para usar el componente capsula 
#include "GameFramework/CharacterMovementComponent.h" // Acceso al movimiento del Character
#include "GameFramework/SpringArmComponent.h" // Permite el uso del brazo de camara 
#include "GameFramework/Controller.h" // Para controlar rotacion e input del jugador
#include "EnhancedInputComponent.h" // Permite el sistema de Input mejorado 
#include "EnhancedInputSubsystems.h" // Subsistema para manejar los mapeos de input
#include "InputActionValue.h" // Tipo de dato usado por Enhanced Input para manejar valores de accion
#include "TraPra_U1_PEV2_GM.h" // Header del proyecto

ATraPra_U1_PEV2_GMCharacter::ATraPra_U1_PEV2_GMCharacter()
{
	// tamano de la capsula de colision del personaje
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	// Permite que solo la camara rote, no el cuerpo del Character.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configura el personaje para que se oriente automaticamente hacia la direccion de movimiento
	GetCharacterMovement()->bOrientRotationToMovement = true;
	// Establece la velocidad de rotacion del personaje
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f);

	
	//  Control en el aire,  Velocidad maxima de caminata, Velocidad minima para movimiento, Desaceleracion al soltar y Desaceleracion cuando cae
	GetCharacterMovement()->JumpZVelocity = 500.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	// crea el brazo de la camara y sus configuraciones basicas de el largo del brazo, que la rotacion siga el personaje y la raiz
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f;
	CameraBoom->bUsePawnControlRotation = true;

	// Crea el seguimiento de la camara
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

}

// Inputs
void ATraPra_U1_PEV2_GMCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Configura las acciones de input del jugador usando el sistema Enhanced Input
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {
		
		// salto
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// movimiento
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ATraPra_U1_PEV2_GMCharacter::Move);
		EnhancedInputComponent->BindAction(MouseLookAction, ETriggerEvent::Triggered, this, &ATraPra_U1_PEV2_GMCharacter::Look);

		// mirar alrededor
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ATraPra_U1_PEV2_GMCharacter::Look);
	}
	else
	{
		// Mensaje de error si no se encuentra un EnhancedInputComponent
		UE_LOG(LogTraPra_U1_PEV2_GM, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

// MOVIMIENTO
void ATraPra_U1_PEV2_GMCharacter::Move(const FInputActionValue& Value)
{
	//  el input en un vector 2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	//  Envia el input al metodo interno que aplica el movimiento 
	DoMove(MovementVector.X, MovementVector.Y);
}

void ATraPra_U1_PEV2_GMCharacter::Look(const FInputActionValue& Value)
{
	// el input en un vector 2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	//  Envia el input al metodo interno que aplica la rotacion
	DoLook(LookAxisVector.X, LookAxisVector.Y);
}

void ATraPra_U1_PEV2_GMCharacter::DoMove(float Right, float Forward)
{
	if (GetController() != nullptr)
	{
		// obtiene la rotacion actual del control
		const FRotator Rotation = GetController()->GetControlRotation();
		// Crea un rotador solo con el Yaw
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// Calcula el vector de direccion frontal
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		// Calcula el vector de direccion lateral
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// Aplica movimiento
		AddMovementInput(ForwardDirection, Forward);
		AddMovementInput(RightDirection, Right);
	}
}

void ATraPra_U1_PEV2_GMCharacter::DoLook(float Yaw, float Pitch)
{ 
	// Verifica que el controlador exista antes de rotar
	if (GetController() != nullptr)
	{
		// Aplica rotacion horizontal
		AddControllerYawInput(Yaw);
		// Aplica rotacion vertical
		AddControllerPitchInput(Pitch);
	}
}

// SALTO
void ATraPra_U1_PEV2_GMCharacter::DoJumpStart()
{
	// manda la senal de salto
	Jump();
}

void ATraPra_U1_PEV2_GMCharacter::DoJumpEnd()
{
	// indica que deje de saltar
	StopJumping();
}

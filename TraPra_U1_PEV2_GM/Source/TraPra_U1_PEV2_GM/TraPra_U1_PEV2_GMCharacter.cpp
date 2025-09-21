// Copyright Epic Games, Inc. All Rights Reserved.

// Se añaden los headers de las bibliotecas o archivos que van a ser utilizados. Ej.: #include "TraPra_U1_PEV2_GMCharacter.h" referencia al header de este archivo .cpp
#include "TraPra_U1_PEV2_GMCharacter.h"
#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "InputActionValue.h"
#include "TraPra_U1_PEV2_GM.h"



// Se inicizializan los elementos principales del archivo
ATraPra_U1_PEV2_GMCharacter::ATraPra_U1_PEV2_GMCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	Health = 100;
	Speed = 100;
	Damage = 10;

	// Set size for collision capsule
	// Mediante GetCapsuleComponent() toma el componente de capsula, lo inicializa y le asigna un tamaño.
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate when the controller rotates. Let that just affect the camera. 
	// Como el personaje es en 3ra persona, desactiva los cambios de la cámara por el Pitch, Yaw y Roll del controlador. 
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	// Mediante GetCharacterMovement() toma el movimiento del personaje y primero, activa la rotación en base al mismo. Segundo, modifica el grado de rotación.
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f);

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	// Mediante GetCharacterMovement() toma el movimiento del personaje para ajustar la velocidad de salto, el control en el aire, la velocidad máxima y mínima de caminata 
	// y además, la desaceleración de freno al caminar y caer
	GetCharacterMovement()->JumpZVelocity = 1000.f; // Dupliqué la velocidad de salto de 500 a 1000 unidades
	GetCharacterMovement()->AirControl = 0.1f; // Aumenté el AirControl de 0.35 a 1
	GetCharacterMovement()->MaxWalkSpeed = 1500.f; // Tripliqué la velocidad máxima de caminata de 500 a 1500
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	// Mediante CreateDefaultSubobject<> crea un componente de spring para la cámara, le asigna un nombre, le asigna una jerarquía, 
	// le asigna una longitud y por último, activa la rotación en base al pawn.
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 600.0f; // Aumenté la longitud de CameraBoom de 400 a 600
	CameraBoom->bUsePawnControlRotation = true;

	// Create a follow camera
	// Mediante CreateDefaultSubobject<> crea un componente de cámara que sigue al character, le asigna un nombre al componente, le asigna una sub-jerarquía respecto a CameraBoom,
	// y desactiva la rotación respecto al pawn.
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)
}



void ATraPra_U1_PEV2_GMCharacter::ShowHealth()
{
	if (GEngine) // GEngine si existe muestro mensaje
	{
		GEngine->AddOnScreenDebugMessage(
			-1,//Esto es el key
			5.0f,// esto es el tiempo que va permanecer
			FColor::Red, // esto es el color
			FString::Printf(TEXT("La vida actual es: %d"), Health) //FString::Printf(TEXT("Hola soy TestItem")) // y esto es el mensaje a mostrar en pantalla
		);
	}
}

void ATraPra_U1_PEV2_GMCharacter::ShowSpeed()
{
	if (GEngine) // GEngine si existe muestro mensaje
	{
		GEngine->AddOnScreenDebugMessage(
			-1,//Esto es el key
			5.0f,// esto es el tiempo que va permanecer
			FColor::Red, // esto es el color
			FString::Printf(TEXT("La velocidad actual es: %d"), Speed) // y esto es el mensaje a mostrar en pantalla
		);
	}
}

void ATraPra_U1_PEV2_GMCharacter::ShowDamage()
{
	if (GEngine) // GEngine si existe muestro mensaje
	{
		GEngine->AddOnScreenDebugMessage(
			-1,//Esto es el key
			5.0f,// esto es el tiempo que va permanecer
			FColor::Red, // esto es el color
			FString::Printf(TEXT("El dano actual es es: %d"), Damage) // y esto es el mensaje a mostrar en pantalla
		);
	}
}

// Inicializa el componente de player input para las acciones dependientes de inputs como saltar, moverse y mirar. 
// Utiliza dos modelos de inputs: 1- Started & Completed, 2- Triggered. En caso de no encontrar el componente, muestra un mensaje dando aviso.
void ATraPra_U1_PEV2_GMCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {

		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ATraPra_U1_PEV2_GMCharacter::Move);
		EnhancedInputComponent->BindAction(MouseLookAction, ETriggerEvent::Triggered, this, &ATraPra_U1_PEV2_GMCharacter::Look);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ATraPra_U1_PEV2_GMCharacter::Look);

		// Stats - Muestra stats como Health, Speed y Damage.
		EnhancedInputComponent->BindAction(ShowHealthAction, ETriggerEvent::Started, this, &ATraPra_U1_PEV2_GMCharacter::ShowHealth);
		EnhancedInputComponent->BindAction(ShowSpeedAction, ETriggerEvent::Started, this, &ATraPra_U1_PEV2_GMCharacter::ShowSpeed);
		EnhancedInputComponent->BindAction(ShowDamageAction, ETriggerEvent::Started, this, &ATraPra_U1_PEV2_GMCharacter::ShowDamage);


	}
	else
	{
		UE_LOG(LogTraPra_U1_PEV2_GM, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

// Inicializa la acción/input para moverse mediante un vector 2D. El personaje se mueve en base a los inputs de los ejes X & Y
void ATraPra_U1_PEV2_GMCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	// route the input
	DoMove(MovementVector.X, MovementVector.Y);
}

// Inicializa la acción/input para mirar mediante un vector 2D. El personaje mira en base a los inputs de los ejes X & Y
void ATraPra_U1_PEV2_GMCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	// route the input
	DoLook(LookAxisVector.X, LookAxisVector.Y);
}

// Esta sección se utiliza para encontrar las direccíones de los vectores de movimiento. Siempre que exista un input de movimiento, primero toma que dirección 
// es adelante para el character en base a la rotación del Yaw (0).
// Encuentra el vector delantero y del lado derecho, posteriormente le da movimiento al character con AddMovementInput()
void ATraPra_U1_PEV2_GMCharacter::DoMove(float Right, float Forward)
{
	if (GetController() != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = GetController()->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, Forward);
		AddMovementInput(RightDirection, Right);
	}
}

// Esta sección se utiliza para determinar las direccíones de los vectores para mirar (siempre que exista un input para mirar)
void ATraPra_U1_PEV2_GMCharacter::DoLook(float Yaw, float Pitch)
{
	if (GetController() != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(Yaw);
		AddControllerPitchInput(Pitch);
	}
}
// El personaje ejecuta la acción saltar al recibir la señal
void ATraPra_U1_PEV2_GMCharacter::DoJumpStart()
{
	// signal the character to jump
	Jump();
}

// El personaje deja de saltar al recibir la señal
void ATraPra_U1_PEV2_GMCharacter::DoJumpEnd()
{
	// signal the character to stop jumping
	StopJumping();
}

void ATraPra_U1_PEV2_GMCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		if (ULocalPlayer* LocalPlayer = PlayerController->GetLocalPlayer())
		{
			if (UEnhancedInputLocalPlayerSubsystem* Subsystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
			{
				// IMC_Default es tu Input Mapping Context
				Subsystem->AddMappingContext(DefaultMappingContext, 0);
			}
		}
	}
}

void ATraPra_U1_PEV2_GMCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

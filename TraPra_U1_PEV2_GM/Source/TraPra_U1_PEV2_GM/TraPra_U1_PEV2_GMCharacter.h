// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

// Se añaden los headers de las bibliotecas o archivos que van a ser utilizados en este archivo header.
#include "CoreMinimal.h" // Incluye las cabeceras basicas y tipos esenciales de Unreal Engine
#include "GameFramework/Character.h" // Incluye la clase base ACharacter que proporciona funcionalidad de personaje jugable
#include "Logging/LogMacros.h"  // Incluye macros para crear categorias de log (mensajes de depuracion)
#include "InputMappingContext.h" //Para el mapeo de inputs 
#include "TraPra_U1_PEV2_GMCharacter.generated.h" // Genera codigo adicional necesario para el sistema de reflection y blueprints de Unreal

// Se declaran las clases y estructuras  utilizadas en el header
class USpringArmComponent; // Declaracion adelantada de la clase USpringArmComponent
class UCameraComponent; // Declaracion adelantada de la clase UCameraComponent 
class UInputAction; // Declaracion adelantada de la clase UInputAction 
class UInputMappingContext; // Declaracion adelantada de la clase MappingAction 
struct FInputActionValue; // Declaracion adelantada de la clase UInputAction 

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);



 // Crea la clase del personaje y la asigna como pública.
UCLASS(abstract) // Define UCLASS como abstracta
class ATraPra_U1_PEV2_GMCharacter : public ACharacter
{
	// necesario para reflection, serializacion y blueprint
	GENERATED_BODY()

	/** posiciona el brazo de la camara detras del personaje */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** seguimiento de camara */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputMappingContext* DefaultMappingContext;

protected:
	/** Jump */
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* JumpAction;

	/** Move Input */
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* MoveAction;

	/** Mirar Input  */
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* LookAction;

	/** Mirar con Mouse  Input */
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* MouseLookAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* ShowVidaAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* ShowAgilidadAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* ShowDMGAction;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	int Vida;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	int Agilidad;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	int DMG;

public:

	/** Constructor */

	ATraPra_U1_PEV2_GMCharacter();

protected:

	virtual void BeginPlay() override;

	/** Initialize input action bindings */
	// Crea/inicializa el componente de inputs del jugador con un virtual void. Esto se puede ejecutar por defecto si el diseñador no realiza un override
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Crea las acciones de movimiento y mirar

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

public:
	// Crea y asigna propiedades de Unreal a la ejecucion de acciones (por controles o UI) mediante un virtual void. 
	// Esto se puede ejecutar por defecto si el diseñador no realiza un override

	/** Handles move inputs from either controls or UI interfaces */
	UFUNCTION(BlueprintCallable, Category = "Input")
	virtual void DoMove(float Right, float Forward);

	/** Handles look inputs from either controls or UI interfaces */
	UFUNCTION(BlueprintCallable, Category = "Input")
	virtual void DoLook(float Yaw, float Pitch);

	/** Handles jump pressed inputs from either controls or UI interfaces */
	UFUNCTION(BlueprintCallable, Category = "Input")
	virtual void DoJumpStart();

	/** Handles jump pressed inputs from either controls or UI interfaces */
	UFUNCTION(BlueprintCallable, Category = "Input")
	virtual void DoJumpEnd();

	UFUNCTION(BlueprintCallable, Category = "Input")
	void ShowVida();

	UFUNCTION(BlueprintCallable, Category = "Input")
	void ShowAgilidad();

	UFUNCTION(BlueprintCallable, Category = "Input")
	void ShowDMG();

public:


	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }


};
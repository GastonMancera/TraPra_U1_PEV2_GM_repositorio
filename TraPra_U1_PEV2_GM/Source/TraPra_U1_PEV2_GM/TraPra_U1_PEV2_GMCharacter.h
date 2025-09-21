// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

// Se añaden los headers de las bibliotecas o archivos que van a ser utilizados en este archivo header.
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "InputMappingContext.h"
#include "TraPra_U1_PEV2_GMCharacter.generated.h"

// Se declaran las clases y estructuras que van a ser utilizadas en el archivo header
class USpringArmComponent;
class UCameraComponent;
class UInputAction;
class UInputMappingContext;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

/**
 *  A simple player-controllable third person character
 *  Implements a controllable orbiting camera
 */

 // Crea la clase del personaje y la asigna como pública.
UCLASS(abstract)
class ATraPra_U1_PEV2_GMCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	// Determina las propiedades de Unreal de CameraBoom
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** Follow camera */
	// Determina las propiedades de Unreal de FollowCamera
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputMappingContext* DefaultMappingContext;

protected:
	// Las siguientes acciones/inputs están protegidas, su modificación es limitada o restringida.

	/** Jump Input Action */
	// Determina las propiedades de de Unreal de la acción saltar
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* JumpAction;

	/** Move Input Action */
	// Determina las propiedades de de Unreal de la acción moverse
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* MoveAction;

	/** Look Input Action */
	// Determina las propiedades de de Unreal de la acción mirar
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* LookAction;

	/** Mouse Look Input Action */
	// Determina las propiedades de de Unreal de la acción mirar con el mouse
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* MouseLookAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* ShowHealthAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* ShowSpeedAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* ShowDamageAction;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	int Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	int Speed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	int Damage;

public:

	/** Constructor */
	// Crea el constructor de la clase, el cual se carga en la memoria previo al inicio
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
	void ShowHealth();

	UFUNCTION(BlueprintCallable, Category = "Input")
	void ShowSpeed();

	UFUNCTION(BlueprintCallable, Category = "Input")
	void ShowDamage();

public:
	// Acá me mataste Kent, esto no lo llegue a ver en clase jajajaja
	// Imagino que genera o utiliza punteros para devolver valores de CameraBoom y FollowCamera

	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }


};
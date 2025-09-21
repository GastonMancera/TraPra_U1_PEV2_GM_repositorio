// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h" // Incluye las cabeceras basicas y tipos esenciales de Unreal Engine
#include "GameFramework/Character.h" // Incluye la clase base ACharacter que proporciona funcionalidad de personaje jugable
#include "Logging/LogMacros.h" // Incluye macros para crear categorias de log (mensajes de depuracion)
#include "TraPra_U1_PEV2_GMCharacter.generated.h" / Genera codigo adicional necesario para el sistema de reflection y blueprints de Unreal

class USpringArmComponent; // Declaracion adelantada de la clase USpringArmComponent (brazo de camara)
class UCameraComponent; // Declaracion adelantada de la clase UCameraComponent (camara)
class UInputAction; // Declaracion adelantada de la clase UInputAction (acciones de entrada)
struct FInputActionValue; // Declaracion adelantada de la estructura FInputActionValue (valor de entrada de una accion)
 
DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All); // Declara una categoria de log externa llamada LogTemplateCharacter para depuracion


UCLASS(abstract) // Define UCLASS como abstracta
class ATraPra_U1_PEV2_GMCharacter : public ACharacter
{
	// necesario para reflection, serializacion y blueprint
	GENERATED_BODY()

	/** posiciona el brazo de la camara detras del personaje */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** seguimiento de camara */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;
	
protected:

	/** Jump */
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* JumpAction;

	/** Move Input */
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* MoveAction;

	/** Mirar Input  */
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* LookAction;

	/** Mirar con Mouse  Input */
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* MouseLookAction;

public:

	/** Clase Constructor */
	ATraPra_U1_PEV2_GMCharacter();	

protected:

	//Funcion que inicializa el mapeo de entradas del jugador, override de ACharacter
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:

	// Funcion que se llama cuando hay entrada de movimiento
	void Move(const FInputActionValue& Value);

	// Funcion que se llama cuando hay entrada de mirar/camara
	void Look(const FInputActionValue& Value);

public:

	// Funcion blueprint-callable para mover el personaje, puede ser llamada desde UI o controles
	UFUNCTION(BlueprintCallable, Category="Input")
	virtual void DoMove(float Right, float Forward);

	// Funcion blueprint-callable para mirar/cambiar camara/
	UFUNCTION(BlueprintCallable, Category="Input")
	virtual void DoLook(float Yaw, float Pitch);

	// Funcion blueprint-callable para iniciar salto
	UFUNCTION(BlueprintCallable, Category="Input")
	virtual void DoJumpStart();

	// Funcion blueprint-callable para terminar salto
	UFUNCTION(BlueprintCallable, Category="Input")
	virtual void DoJumpEnd();

public:

	// Funcion que se llama cuando hay entrada de movimiento
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	// Funcion que se llama cuando hay entrada de mirar/camara
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};


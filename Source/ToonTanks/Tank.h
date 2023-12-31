// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Tank.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API ATank : public ABasePawn
{
	GENERATED_BODY()
	
	public:
		// Sets default values for this pawn's properties
		ATank();
		// Called to bind functionality to input
		virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
		// Called every frame
		virtual void Tick(float DeltaTime) override;

	protected:
		// Called when the game starts or when spawned
		virtual void BeginPlay() override;
	private:
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components", meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* SpringArm;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components", meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* Camera;
		UPROPERTY(EditAnywhere, Category = "Variables", meta = (AllowPrivateAccess = "true"))
		int32 Speed = 300;
		UPROPERTY(EditAnywhere, Category = "Variables", meta = (AllowPrivateAccess = "true"))
		int32 TurnRate = 200;
		void Move(float Value);
		void Turn(float Value);
		APlayerController* PlayerControllerRef;
};

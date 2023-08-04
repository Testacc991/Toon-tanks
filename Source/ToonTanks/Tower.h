// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Tower.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API ATower : public ABasePawn
{
	GENERATED_BODY()
	
	public:

		virtual void Tick(float DeltaTime) override;

	protected:
		// Called when the game starts or when spawned
		virtual void BeginPlay() override;

		UPROPERTY(VisibleAnywhere, Category = "Tank")
			class ATank* Tank;
		UPROPERTY(EditAnywhere, Category = "TowerVariables", meta = (AllowPrivateAccess = "true"))
			float FireRange = 800;
		UPROPERTY(EditAnywhere, Category = "TowerVariables", meta = (AllowPrivateAccess = "true"))
			float FireRate = 2.f;

		FTimerHandle FireRateTimerHandle;
		void CheckFireCondition();
		bool InFireRange();
	private:
		
};

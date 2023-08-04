// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Tower.h"
#include "LightTower.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API ALightTower : public ATower
{
	GENERATED_BODY()
	public:

		ALightTower();

		virtual void Tick(float DeltaTime) override;

	private:
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LightTowerComponents", meta = (AllowPrivateAccess = "true"))
		UStaticMeshComponent* Sphere;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LightTowerComponents", meta = (AllowPrivateAccess = "true"))
		class UMaterialInterface* MaterialRef;

	protected:
	// Called when the game starts or when spawned
		virtual void BeginPlay() override;

};

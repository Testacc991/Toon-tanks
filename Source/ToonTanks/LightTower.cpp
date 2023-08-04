// Fill out your copyright notice in the Description page of Project Settings.


#include "LightTower.h"
#include "Materials/MaterialInterface.h"

ALightTower::ALightTower()
{
    PrimaryActorTick.bCanEverTick = true;
	Sphere = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sphere"));
	Sphere->SetupAttachment(RootComponent);	
}

void ALightTower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ALightTower::BeginPlay()
{
	Super::BeginPlay();
	if (Sphere)
	{
		MaterialRef = Sphere->GetMaterial(0);
		UE_LOG(LogTemp, Warning, TEXT("Name: %s"), *MaterialRef->GetName());
		UE_LOG(LogTemp, Warning, TEXT("TEST"));
	}
}

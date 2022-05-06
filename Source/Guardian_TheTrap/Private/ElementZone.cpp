// Fill out your copyright notice in the Description page of Project Settings.

#include "ElementZone.h"


// Sets default values
AElementZone::AElementZone()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AElementZone::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AElementZone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AElementZone::SetupBasicInfo()
{
	Duration = ElementBottle->EnchantDuration;
	Damage = ElementBottle->DamagePerSecond;
	PlayerSpawned = Cast<APawn>(ElementBottle->PlayerGrabbed);
}


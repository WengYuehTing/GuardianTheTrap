// Fill out your copyright notice in the Description page of Project Settings.

#include "APig.h"


// Sets default values
AAPig::AAPig()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAPig::BeginPlay()
{
	Super::BeginPlay();

	Tags.Add(FName("Enemy"));
	Tags.Add(FName("Pig"));
}

// Called every frame
void AAPig::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAPig::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


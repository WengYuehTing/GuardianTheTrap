// Fill out your copyright notice in the Description page of Project Settings.

#include "ARabbit.h"


// Sets default values
AARabbit::AARabbit()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AARabbit::BeginPlay()
{
	Super::BeginPlay();

	Tags.Add(FName("Enemy"));
	Tags.Add(FName("Rabbit"));
	
}

// Called every frame
void AARabbit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AARabbit::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


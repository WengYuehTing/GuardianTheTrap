// Fill out your copyright notice in the Description page of Project Settings.

#include "Trap.h"


// Sets default values
ATrap::ATrap()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATrap::BeginPlay()
{
	Super::BeginPlay();
	
	
	
}

// Called every frame
void ATrap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATrap::Fire_Implementation(APawn* Player) {
	HandleFire(Player);
}

void ATrap::LevelUp_Implementation() {
	HandleLevelUp();
}
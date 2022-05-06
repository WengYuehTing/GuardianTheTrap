// Fill out your copyright notice in the Description page of Project Settings.

#include "ElementBottle.h"


// Sets default values
AElementBottle::AElementBottle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AElementBottle::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AElementBottle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AElementBottle::Enchant(AActor *Target)
{
	HandleEnchant(Target);
}

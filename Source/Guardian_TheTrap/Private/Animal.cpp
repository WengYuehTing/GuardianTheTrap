// Fill out your copyright notice in the Description page of Project Settings.

#include "Animal.h"


// Sets default values
AAnimal::AAnimal()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAnimal::BeginPlay()
{
	Super::BeginPlay();
	
	Tags.Add(FName("Animal"));
	Tags.Add(FName("Pig"));
	
}

// Called every frame
void AAnimal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAnimal::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AAnimal::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AAnimal, HP);
	DOREPLIFETIME(AAnimal, IsThunderEnchantEffect);
	DOREPLIFETIME(AAnimal, GetAttacked);
	DOREPLIFETIME(AAnimal, IsAttacking);
}

void AAnimal::ReleaseSocket() 
{
	if (SelectedSocket != nullptr) {
		SelectedSocket->BeSeleced = false;
		SelectedSocket->Idle = true;
		SelectedSocket->CustomerAnimal = nullptr;
		SelectedSocket->NearestIdleAnimal = nullptr;

		SelectedSocket = nullptr;
	}
}
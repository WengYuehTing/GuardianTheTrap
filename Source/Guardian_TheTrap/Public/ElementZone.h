// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Animal.h"
#include "ElementBottle.h"
#include "ElementZone.generated.h"

UCLASS()
class GUARDIAN_THETRAP_API AElementZone : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AElementZone();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Life")
	float Duration = 0.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Life")
	bool AutoActive = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Attack")
	float Damage = 0.0f;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Life")
	APawn* PlayerSpawned = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Life")
	AElementBottle* ElementBottle = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Attack")
	TArray<AAnimal *> TargetAnimals;

	UFUNCTION(BlueprintCallable, Category = "Property")
	void SetupBasicInfo();

	
	
};

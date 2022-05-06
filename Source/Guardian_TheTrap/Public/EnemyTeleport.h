// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyTeleport.generated.h"

UENUM(BlueprintType)
enum EAnimals
{
	Pig     UMETA(DisplayName = "Pig"),
	Rabbit      UMETA(DisplayName = "Rabbit"),
	Elephant   UMETA(DisplayName = "Elephant"),
	BlackPig     UMETA(DisplayName = "BlackPig"),
	BlackRabbit     UMETA(DisplayName = "BlackRabbit")
};

USTRUCT(BlueprintType)
struct FAnimalsWave
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LocalWaveDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpawnedRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TEnumAsByte<EAnimals>> AnimalsOrder;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int CurrentAmount = 0;

};

UCLASS()
class GUARDIAN_THETRAP_API AEnemyTeleport : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemyTeleport();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn")
	float SpawnRate = 2.5f;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Spawn")
	FVector SpawnLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn")
	TArray<FAnimalsWave> AnimalsInfo;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Spawn")
	bool IsStartSpawning = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Spawn")
	bool IsFinishSpawning = false;
	
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Trap.generated.h"

UENUM(BlueprintType)
enum TrapLevel
{
	Level_1   ,
	Level_2   ,
	Level_3   
};

UCLASS()
class GUARDIAN_THETRAP_API ATrap : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATrap();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fire")
	float Damage = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fire")
	float CD = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fire")
	bool CanFire = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fire")
	bool CanRepeating = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cost")
	float Money;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cost")
	float Wood;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cost")
	float Ore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fire")
	bool CanTrigger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Highlight")
	bool IsHighlighting;

	UFUNCTION(BlueprintCallable, Category = "Fire", NetMulticast, Reliable)
	virtual void Fire(APawn* Player);

	UFUNCTION(BlueprintImplementableEvent)
	void HandleFire(APawn* Player);

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Player")
	APawn* PlayerSpawned;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Player")
	APawn* PlayerGrabbed;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Grab")
	bool CanGrab;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level")
	TEnumAsByte<TrapLevel> Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level")
	TEnumAsByte<TrapLevel> MaxLevel;

	UFUNCTION(BlueprintCallable, Category = "Level", NetMulticast, Reliable)
	virtual void LevelUp();

	UFUNCTION(BlueprintImplementableEvent)
	void HandleLevelUp();

		
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ElementBottle.generated.h"

UENUM(BlueprintType)
enum EnchantType
{
	Fire     UMETA(DisplayName = "Fire"),
	Ice      UMETA(DisplayName = "Ice"),
	Thunder   UMETA(DisplayName = "Thunder"),
};

UCLASS()
class GUARDIAN_THETRAP_API AElementBottle : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AElementBottle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enchant")
	TEnumAsByte<EnchantType> Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enchant")
	float EnchantDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enchant")
	float DamagePerSecond;

	UFUNCTION(BlueprintCallable, Category = "Enchantments")
	void Enchant(AActor *Target);

	UFUNCTION(BlueprintImplementableEvent)
	void HandleEnchant(AActor *Target);

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Grab")
	AActor* PlayerGrabbed;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "State")
	bool IsUsed = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State")
	float UsedCD = 0.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "State")
	float CurDuration = 0.0f;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BarnSocket.generated.h"

UCLASS()
class GUARDIAN_THETRAP_API ABarnSocket : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABarnSocket();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Animal")
	bool Idle = true;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Animal")
	bool BeSeleced = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Animal")
	AActor* CustomerAnimal;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Animal")
	AActor* NearestIdleAnimal;
	
};

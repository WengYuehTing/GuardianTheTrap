// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BarnSocket.h"
#include "Barn.h"
#include "ARabbit.generated.h"

UCLASS()
class GUARDIAN_THETRAP_API AARabbit : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AARabbit();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Move")
	ABarn* Barn = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Move")
	ABarnSocket* SelectedSocket = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Move")
	float DistanceToSocket = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Move")
	float Speed = 400.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Move")
	bool IsArriveAtSocket = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Move")
	bool IsStuck = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Life")
	float HP = 200.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	float Damage = 20.0f;
	
};

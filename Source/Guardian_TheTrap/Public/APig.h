// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BarnSocket.h"
#include "Barn.h"
#include "APig.generated.h"

UCLASS()
class GUARDIAN_THETRAP_API AAPig : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAPig();

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
	float DistanceToSocket = 10000.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Move")
	float Speed = 250.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Move")
	float RotateSpeed = 60.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Move")
	bool IsArriveAtSocket = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Move")
	bool IsStuck = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Move")
	bool IsReselected = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "State")
	bool SelfAwareness = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Life")
	float HP = 300.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	float Damage = 30.0f;

	

	
};

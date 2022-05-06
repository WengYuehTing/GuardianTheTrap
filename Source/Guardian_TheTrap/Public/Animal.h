// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BarnSocket.h"
#include "Barn.h"
#include "ElementBottle.h"
#include "UnrealNetwork.h"
#include "Animal.generated.h"

UCLASS()
class GUARDIAN_THETRAP_API AAnimal : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAnimal();

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
	ABarnSocket* NearestSocket = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Move")
	float DistanceToSocket = 10000.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Move")
	float MaxSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Move")
	float Speed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Move")
	float RotateSpeed;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Move")
	bool IsArriveAtSocket = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Move")
	float MinArriveDistance;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Move")
	bool IsStuck = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Move")
	float StuckSeconds;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Move")
	bool IsReselected = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Move")
	bool CanBeBounceOff = true;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "State")
	bool SelfAwareness = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "State")
	bool IsOnGround = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Life")
	float MaxHP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Life")
	float HP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Life")
	bool ShouldSuicide = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Life")
	float MaxSecondsToSuicide = 10.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Life")
	float CurrentSecondsToSuicide = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	float Damage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	float MaxAttackSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	float AttackSpeed;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Replicated, Category = "Attack")
	bool IsAttacking = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Replicated, Category = "Attack")
	bool GetAttacked = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	float RecoveryCD;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	float AttackAnimDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	bool IsHurtByWeapon = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	float HurtWeaponCD = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Enchant")
	TArray<TEnumAsByte<EnchantType>> EnchantList;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Enchant")
	bool IsFireEnchantEffect = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Enchant")
	float FireDuration = 0.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Enchant")
	float FireSufferDamage = 0.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Enchant")
	bool IsIceEnchantEffect = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Enchant")
	float IceDuration = 0.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Replicated, Category = "Enchant")
	bool IsThunderEnchantEffect = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Enchant")
	float ThunderDuration = 0.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Enchant")
	float FireColorBoost = 0.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Enchant")
	float IceColorBoost = 0.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Enchant")
	float ThunderColorBoost = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Reward")
	float Reward;

	UFUNCTION(BlueprintCallable, Category = "Select")
	void ReleaseSocket();

};

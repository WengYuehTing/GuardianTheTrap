// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "UnrealNetwork.h"
#include "Barn.generated.h"

/**
 * 
 */
UCLASS()
class GUARDIAN_THETRAP_API ABarn : public AStaticMeshActor
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Life")
	float MaxHP = 50.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Life")
	float HP = MaxHP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Defense")
	float InRange = 300.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Life")
	bool IsCollapsed = false;
	
};

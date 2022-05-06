// Fill out your copyright notice in the Description page of Project Settings.

#include "Barn.h"



void ABarn::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ABarn, HP);
}

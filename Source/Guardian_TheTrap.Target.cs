// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Guardian_TheTrapTarget : TargetRules
{
	public Guardian_TheTrapTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "Guardian_TheTrap" } );
	}
}

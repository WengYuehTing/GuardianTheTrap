// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Guardian_TheTrapEditorTarget : TargetRules
{
	public Guardian_TheTrapEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "Guardian_TheTrap" } );
	}
}

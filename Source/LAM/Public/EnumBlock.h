// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnumBlock.generated.h"

UENUM(BlueprintType)
enum class EBlock : uint8
{
	E_Forest UMETA(DisplayName = "forestblock"),
	E_Grass UMETA(DisplayName = "grassblock"),
	E_Desert UMETA(DisplayName = "desertblock"),
	E_Snow UMETA(DisplayName = "snowblock"),
	E_Water UMETA(DisplayName = "waterblock"),
	E_Nest UMETA(DisplayName = "nestblock"),
	E_Mud UMETA(DisplayName = "mudblock")
};
// Fill out your copyright notice in the Description page of Project Settings.


#include "Default_GameMode.h"
#include "MouseController.h"
#include "MousePawn.h"

ADefault_GameMode::ADefault_GameMode()
{
	DefaultPawnClass = AMousePawn::StaticClass();
	PlayerControllerClass = AMouseController::StaticClass();
}
// Fill out your copyright notice in the Description page of Project Settings.


#include "MouseController.h"

AMouseController::AMouseController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}

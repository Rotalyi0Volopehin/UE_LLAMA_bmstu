// Fill out your copyright notice in the Description page of Project Settings.


#include "DessertBlock.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "Materials/MaterialInstance.h"

ADesertBlock::ADesertBlock()
{
	temperature = 60;
	maxspeed = 100;
	BaseMaterial = ConstructorStatics.YellowMaterial.Get();
	BlockMesh->SetMaterial(0, BaseMaterial);
}
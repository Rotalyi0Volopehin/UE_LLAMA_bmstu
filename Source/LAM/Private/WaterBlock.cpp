// Fill out your copyright notice in the Description page of Project Settings.


#include "WaterBlock.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "Materials/MaterialInstance.h"

AWaterBlock::AWaterBlock()
{
	temperature = 15;
	maxspeed = 150;
	BaseMaterial = ConstructorStatics.BlueMaterial.Get();
	BlockMesh->SetMaterial(0, BaseMaterial);
}

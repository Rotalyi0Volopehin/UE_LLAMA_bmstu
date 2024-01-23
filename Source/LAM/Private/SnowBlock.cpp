// Fill out your copyright notice in the Description page of Project Settings.


#include "SnowBlock.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "Materials/MaterialInstance.h"

ASnowBlock::ASnowBlock()
{
	temperature = -20;

	BaseMaterial = ConstructorStatics.WhiteMaterial.Get();
	BlockMesh->SetMaterial(0, BaseMaterial);
}
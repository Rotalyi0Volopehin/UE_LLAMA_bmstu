// Fill out your copyright notice in the Description page of Project Settings.


#include "ForestBlock.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "Materials/MaterialInstance.h"

AForestBlock::AForestBlock()
{
	maxspeed = 180;
	temperature = 25;
	forest_amount = FMath::RandRange(1, 15);
	TreeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TreeMesh"));

	FString RandomTreeName1 = "/Game/LUSH_StylizedEnvironmentSet/Foliage/Trees/SM_BananaTree_0" + FString::FromInt(FMath::RandRange(1, 4));
	FString RandomTreeName2 = "/Game/LUSH_StylizedEnvironmentSet/Foliage/Trees/SM_Palm_A_0" + FString::FromInt(FMath::RandRange(1, 4));

	if (forest_amount>=7)
	{
		ConstructorHelpers::FObjectFinder<UStaticMesh> Tree(*RandomTreeName1);
		TreeMesh->SetStaticMesh(Tree.Object);
	}
	else
	{
		ConstructorHelpers::FObjectFinder<UStaticMesh> Tree(*RandomTreeName2);
		TreeMesh->SetStaticMesh(Tree.Object);
	}
	TreeMesh->SetRelativeLocation(FVector(0.f, 0.f, 100.f)); 
	TreeMesh->SetupAttachment(DummyRoot);
	TreeMesh->SetCollisionProfileName(TEXT("OverlapAll"));
	
}
void AForestBlock::SetForestAmount(int32 newforest)
{
	forest_amount = newforest;
}

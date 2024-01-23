// Fill out your copyright notice in the Description page of Project Settings.

#include "Block.h"
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Widgets/SWidget.h"
#include "Components/TextWidgetTypes.h"

#include "UObject/Package.h"


#include "Spawner.h"

TArray<ABlock*> ABlock::the_block = TArray<ABlock*>();

// Sets default values
ABlock::ABlock()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	maxspeed = 200;

	// Create dummy root scene component
	DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Dummy0"));
	RootComponent = DummyRoot;

	// Create static mesh component
	BlockMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockMesh0"));
	BlockMesh->SetStaticMesh(ConstructorStatics.PlaneMesh.Get());
	BlockMesh->SetRelativeScale3D(FVector(1.5f, 1.5f, 1.0f));
	BlockMesh->SetRelativeLocation(FVector(0.f, 0.f, 25.f));
	BlockMesh->SetMaterial(0, ConstructorStatics.BaseMaterial.Get());
	BlockMesh->SetupAttachment(DummyRoot);
	BlockMesh->OnClicked.AddDynamic(this, &ABlock::BlockClicked);
	BlockMesh->OnInputTouchBegin.AddDynamic(this, &ABlock::OnFingerPressedBlock);
	
	// Save a pointer to the materials
	BaseMaterial = ConstructorStatics.BaseMaterial.Get();
	SelectedMaterial = ConstructorStatics.SelectedMaterial.Get();
	ClickedMaterial = ConstructorStatics.ClickedMaterial.Get();
}

// Called when the game starts or when spawned
void ABlock::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABlock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABlock::BlockClicked(UPrimitiveComponent* ClickedComp, FKey ButtonClicked)
{
	// --REPLACE FROM HERE-- 
	bIsActive = !bIsActive; // flip the value of bIsActive 
	// (if it was true, it becomes false, or vice versa) 
	if (bIsActive)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, TEXT("Clicked. Now clicked"));
		BlockMesh->SetMaterial(0, ClickedMaterial);
		Tags.Add(FName("CLICKED"));

		if (the_block.Num() == 0)
			the_block.Push(this);
	}
	else
	{
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, TEXT("Clicked.Now base"));
		BlockMesh->SetMaterial(0, BaseMaterial);
		Tags.Remove(FName("CLICKED"));
		if (the_block.Num() > 0)
			the_block.Pop();
	}
	// --TO HERE--
}

void ABlock::OnFingerPressedBlock(ETouchIndex::Type FingerIndex, UPrimitiveComponent* TouchedComponent)
{
	HandleClicked();
}

void ABlock::HandleClicked()
{
	// Check we are not already active
	bIsActive = !bIsActive;
	if (bIsActive)
	{
		BlockMesh->SetMaterial(0, ClickedMaterial);
	}
	else
	{
		BlockMesh->SetMaterial(0, BaseMaterial);
	}
}

void ABlock::Highlight(bool bOn)
{
	if (bIsActive)
	{
		return;
	}
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, TEXT("Highlighted."));
	if (bOn)
	{
		BlockMesh->SetMaterial(0, SelectedMaterial);
	}
	else
	{
		BlockMesh->SetMaterial(0, BaseMaterial);
	}
}

float* ABlock::GetXYZ()
{
	float* loc = new float[3];

	loc[0] = DummyRoot->GetRelativeTransform().GetLocation().X;
	loc[1] = DummyRoot->GetRelativeTransform().GetLocation().Y;
	loc[2] = DummyRoot->GetRelativeTransform().GetLocation().Z;

	return loc;
}

const ABlock* ABlock::GetBlock()
{
	if (!(the_block.IsEmpty()))
		return the_block.Last();
	return nullptr;
}
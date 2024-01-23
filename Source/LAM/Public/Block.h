
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "Materials/MaterialInstance.h"
#include "Block.generated.h"

UCLASS()
class LAM_API ABlock : public AActor
{
	GENERATED_BODY()


public:	
	// Sets default values for this actor's properties
	ABlock();

	float* GetXYZ();

	/** Grid that owns us */
	UPROPERTY()
	class ASpawner* OwningGrid;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/** Dummy root component */
	UPROPERTY(Category = Block, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* DummyRoot;

	/** StaticMesh component for the clickable block */
	UPROPERTY(Category = Block, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* BlockMesh;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/** Returns DummyRoot subobject **/
	FORCEINLINE class USceneComponent* GetDummyRoot() const { return DummyRoot; }

	/** Returns BlockMesh subobject **/
	FORCEINLINE class UStaticMeshComponent* GetBlockMesh() const { return BlockMesh; }

	struct FConstructorStatics
	{
		ConstructorHelpers::FObjectFinderOptional<UStaticMesh> PlaneMesh;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> BaseMaterial;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> BlueMaterial;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> OrangeMaterial;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> WhiteMaterial;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> YellowMaterial;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> RedMaterial;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> ClickedMaterial;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> SelectedMaterial;
		FConstructorStatics()
			: PlaneMesh(TEXT("/Engine/EngineMeshes/Cube"))
			, BaseMaterial(TEXT("/Engine/EditorMaterials/WidgetMaterial_Y"))            // Grass or Forest
			, BlueMaterial(TEXT("/Engine/EditorMaterials/WidgetMaterial_Z"))            // Water
			, OrangeMaterial(TEXT("/Engine/EngineMaterials/CubeMaterial"))              // Nest
			, WhiteMaterial(TEXT("/Engine/EditorMaterials/WidgetMaterial"))             // Snow
			, YellowMaterial(TEXT("/Engine/EditorMaterials/WidgetMaterial_Current"))    // Desert
			, RedMaterial(TEXT("/Engine/EditorMaterials/WidgetMaterial_X"))             // Mud
			, ClickedMaterial(TEXT("/Engine/EditorMaterials/PhAT_UnselectedMaterial"))
			, SelectedMaterial(TEXT("/Engine/EditorMaterials/PersonaSky"))
		{
		}
	};

	FConstructorStatics ConstructorStatics;

	/** Are we currently active? */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ACTIVEBLOCK, meta = (ToolTip = ""))
	bool bIsActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 temperature;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 maxspeed;

	/** Pointer to white material used on the focused block */
	UPROPERTY()
	class UMaterial* BaseMaterial;

	/** Pointer to blue material used on inactive blocks */
	UPROPERTY()
	class UMaterial* SelectedMaterial;

	/** Pointer to orange material used on active blocks */
	UPROPERTY()
	class UMaterial* ClickedMaterial;

	/** Handle the block being clicked */
	UFUNCTION(CallInEditor, BlueprintCallable)
	void BlockClicked(UPrimitiveComponent* ClickedComp, FKey ButtonClicked);

	/** Handle the block being touched  */
	UFUNCTION()
	void OnFingerPressedBlock(ETouchIndex::Type FingerIndex, UPrimitiveComponent* TouchedComponent);

	void HandleClicked();

	void Highlight(bool bOn);

	UFUNCTION(CallInEditor, BlueprintCallable, Category = ACTIVEBLOCK)
	static const ABlock* GetBlock();

private:
	static TArray<ABlock*> the_block;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Block.h"
#include "ForestBlock.generated.h"

/**
 * 
 */
UCLASS()
class LAM_API AForestBlock : public ABlock
{
	GENERATED_BODY()

private:

	/** StaticMesh component for the clickable block */
	UPROPERTY(Category = Block, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* TreeMesh;

public:

	AForestBlock();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 forest_amount;

	void SetForestAmount(int32);
};

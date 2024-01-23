// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Spawner.generated.h"

UCLASS()
class LAM_API ASpawner : public AActor
{
	GENERATED_BODY()

	UPROPERTY(Category = Grid, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* DummyRoot;
	
public:	
	// Sets default values for this actor's properties
	ASpawner();

	UFUNCTION(CallInEditor, BlueprintCallable, Category = Actions, meta = (ToolTip = ""))
	void PresentGame();

	UFUNCTION(CallInEditor, BlueprintCallable, Category = Actions, meta = (ToolTip = ""))
	void AskAction();

	UFUNCTION(CallInEditor, BlueprintCallable, Category = Actions, meta = (ToolTip = ""))
	void GetAnswer();

	void GenerateMap();

	UFUNCTION(CallInEditor, BlueprintCallable, Category = Actions, meta = (ToolTip = "Add action to actions subsequence"))
	void AddAction(FString NewAction);

	UFUNCTION(CallInEditor, BlueprintCallable, Category = Actions, meta = (ToolTip = "Set full actions subsequence"))
	void SetActions(TArray<FString> NewActions);

	UFUNCTION(CallInEditor, BlueprintCallable, Category = Actions, meta = (ToolTip = "Get first action of actions subsequence"))
	FString CallNewAction();

	FORCEINLINE class USceneComponent* GetDummyRoot() const { return DummyRoot; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/** Number of x lines */
	UPROPERTY(Category = Grid, EditAnywhere, BlueprintReadOnly)
	int32 XSize=30;

	/** Number of y lines */
	UPROPERTY(Category = Grid, EditAnywhere, BlueprintReadOnly)
	int32 YSize=30;

	/** Number of blocks along each side of grid */
	UPROPERTY(Category = Grid, EditAnywhere, BlueprintReadOnly)
	int32 Size=128;

	/** Temp value for bp return */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ready;

	UPROPERTY(Category = Grid, BlueprintReadOnly)
	FString InToken;

	UPROPERTY(Category = Grid, BlueprintReadWrite)
	FString OutToken;

	FString PrevOutToken;

	FTimerHandle CheckConditionTimer;

	FString WorldMap;
};

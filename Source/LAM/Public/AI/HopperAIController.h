// © 2021, Matthew Barham. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
//#include "Actors/HopperBaseCharacter.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
//#include "Perception/AIPerceptionTypes.h"

#include "HopperAIController.generated.h"

//class UAISenseConfig_Sight;
class UBehaviorTreeComponent;
class UBlackboardComponent;

/**
 * Custom AIController for Animal
 */
UCLASS()
class LAM_API AHopperAIController : public AAIController
{
	GENERATED_BODY()

public:
	AHopperAIController();

	TObjectPtr<UBehaviorTreeComponent> GetBehaviorTreeComponent() const;

	UFUNCTION(CallInEditor, BlueprintCallable, Category = Actions, meta = (ToolTip = "Add action to actions subsequence"))
	void AddAction(FString NewAction);

	UFUNCTION(CallInEditor, BlueprintCallable, Category = Actions, meta = (ToolTip = "Set full actions subsequence"))
	void SetActions(TArray<FString> NewActions);

	UFUNCTION(CallInEditor, BlueprintCallable, Category = Actions, meta = (ToolTip = "Get first action of actions subsequence"))
	FString CallNewAction();

protected:
	virtual void BeginPlay() override;
	virtual void OnPossess(APawn* InPawn) override;

private:
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "AI", meta = (AllowPrivateAccess = true))
	TObjectPtr<UBehaviorTree> BehaviorTree;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI", meta = (AllowPrivateAccess = true))
	TObjectPtr<UBehaviorTreeComponent> BehaviorTreeComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI", meta = (AllowPrivateAccess = true))
	UBlackboardComponent* BlackboardComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "AI", meta = (AllowPrivateAccess = true))
	TArray<FString> Actions;
	
	//TObjectPtr<UAISenseConfig_Sight> SenseConfig_Sight;

	TObjectPtr<UBlackboardData> BlackboardData;
};

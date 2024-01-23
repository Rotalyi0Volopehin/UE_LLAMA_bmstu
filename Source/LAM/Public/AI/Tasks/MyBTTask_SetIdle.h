// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "MyBTTask_SetIdle.generated.h"

/**
 * 
 */
UCLASS()
class LAM_API UMyBTTask_SetIdle : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
public:
	UMyBTTask_SetIdle();

	UPROPERTY(EditAnywhere, Category="Blueprint")
	AActor* BlueprintActor;

private:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};

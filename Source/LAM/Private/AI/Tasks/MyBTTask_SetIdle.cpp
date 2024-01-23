// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/Tasks/MyBTTask_SetIdle.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include <Misc/OutputDeviceNull.h>

UMyBTTask_SetIdle::UMyBTTask_SetIdle()
{
	NodeName = TEXT("Set Action to idle");

	// accept only strings
	BlackboardKey.AddStringFilter(this, GET_MEMBER_NAME_CHECKED(UMyBTTask_SetIdle, BlackboardKey));

}

EBTNodeResult::Type UMyBTTask_SetIdle::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* AIController = OwnerComp.GetAIOwner();
	FOutputDeviceNull OutputDeviceNull;

	AIController->GetBlackboardComponent()->SetValueAsString(BlackboardKey.SelectedKeyName, "idle");
	if (BlueprintActor)
	{
		BlueprintActor->CallFunctionByNameWithArguments(TEXT("gethp"), OutputDeviceNull, nullptr, true);
		
	}
	FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	return EBTNodeResult::Succeeded;
}
// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/Tasks/GetNewAction.h"
#include "AI/HopperAIController.h"

#include "AIController.h"
#include "NavigationSystem.h"
#include "BehaviorTree/BlackboardComponent.h"

UGetNewAction::UGetNewAction()
{
	NodeName = TEXT("Get Action Name");
	// accept only strings
	BlackboardKey.AddStringFilter(this, GET_MEMBER_NAME_CHECKED(UGetNewAction, BlackboardKey));
}

EBTNodeResult::Type UGetNewAction::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	// Get AI Pawn
	AAIController* AIController = OwnerComp.GetAIOwner();

	FString act = "idle";

	AHopperAIController* c = reinterpret_cast<AHopperAIController*>(AIController);
	if (c != nullptr)
		act = c->CallNewAction();
	else
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("very bad"));

	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, act);

	AIController->GetBlackboardComponent()->SetValueAsString(BlackboardKey.SelectedKeyName, act);
	if (act == "idle")
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return EBTNodeResult::Failed;
	}
	// Signal the BehaviorTreeComponent that the task finished with success
	FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	return EBTNodeResult::Succeeded;
}

FString UGetNewAction::GetStaticDescription() const
{
	return FString::Printf(TEXT("String: %s"), *BlackboardKey.SelectedKeyName.ToString());
}

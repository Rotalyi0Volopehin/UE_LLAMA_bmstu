// © 2021, Matthew Barham. All rights reserved.


#include "AI/HopperAIController.h"


#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"

AHopperAIController::AHopperAIController()
{
	BehaviorTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("Behavior Tree Component"));
	BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("Blackboard Component"));
}

TObjectPtr<UBehaviorTreeComponent> AHopperAIController::GetBehaviorTreeComponent() const
{
	return BehaviorTreeComponent;
}

void AHopperAIController::BeginPlay()
{
	Super::BeginPlay();

	if (IsValid(BlackboardData.Get()))
	{
		// Cannot use TObjectPtr for the BlackboardComponent due to this function
		
		UseBlackboard(BlackboardData.Get(), BlackboardComponent);
		
	}

	if (IsValid(BehaviorTree.Get()))
	{
		RunBehaviorTree(BehaviorTree.Get());
		
		BehaviorTreeComponent->StartTree(*BehaviorTree.Get());
	}
}

void AHopperAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if (IsValid(Blackboard.Get()) && IsValid(BehaviorTree.Get()))
	{
		
		Blackboard->InitializeBlackboard(*BehaviorTree.Get()->BlackboardAsset);
		BlackboardComponent->SetValueAsString("Action", "idle");
		//AddAction("go_random");
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, Actions[0]);
	}
}

void AHopperAIController::AddAction(FString NewAction)
{
	Actions.Add(NewAction);
}

void AHopperAIController::SetActions(TArray<FString> NewActions)
{
	Actions = NewActions;
}

FString AHopperAIController::CallNewAction()
{
	if (!(Actions.IsEmpty()))
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, Actions[0]);
			FString act = Actions[0];
			Actions.RemoveAt(0);
			return act;
		}
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("no index 0"));
	return "idle";
}

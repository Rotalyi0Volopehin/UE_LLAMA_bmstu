// © 2021, Matthew Barham. All rights reserved.


#include "AI/Tasks/HopperBTTask_FindRandomLocation.h"

#include "AIController.h"
#include "NavigationSystem.h"
#include "BehaviorTree/BlackboardComponent.h"

UHopperBTTask_FindRandomLocation::UHopperBTTask_FindRandomLocation()
{
	NodeName = TEXT("Find Random Location");

	// accept only vectors
	BlackboardKey.AddVectorFilter(this, GET_MEMBER_NAME_CHECKED(UHopperBTTask_FindRandomLocation, BlackboardKey));
}

EBTNodeResult::Type UHopperBTTask_FindRandomLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	FNavLocation Location{};

	// Get AI Pawn
	AAIController* AIController = OwnerComp.GetAIOwner();
	const APawn* AIPawn = AIController->GetPawn();
	
	// Get Pawn origin
	const FVector Origin = AIPawn->GetActorLocation();
	
	UE_LOG(LogTemp, Warning, TEXT("The vector value is: %s"), *Origin.ToString());
	//UE_LOG(LogTemp, Warning, TEXT("The vector value isss: %s"), *Location.ToString());
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("%s"), *Origin.ToString());

	// Obtain Navigation System and find random location
	const UNavigationSystemV1* NavSystem = UNavigationSystemV1::GetCurrent(GetWorld());

	if (IsValid(NavSystem) && NavSystem->GetRandomPointInNavigableRadius(Origin, SearchRadius, Location))
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("LOCA FOUND"));
		AIController->GetBlackboardComponent()->SetValueAsVector(BlackboardKey.SelectedKeyName,
		                                                         Location.Location);
	}

	// Signal the BehaviorTreeComponent that the task finished with success
	FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	return EBTNodeResult::Succeeded;
}

FString UHopperBTTask_FindRandomLocation::GetStaticDescription() const
{
	return FString::Printf(TEXT("Vector: %s"), *BlackboardKey.SelectedKeyName.ToString());
}

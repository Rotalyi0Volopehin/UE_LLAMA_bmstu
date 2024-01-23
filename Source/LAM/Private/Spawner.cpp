// Fill out your copyright notice in the Description page of Project Settings.


#include "Spawner.h"
#include "Block.h"
#include "DessertBlock.h"
#include "ForestBlock.h"
#include "SnowBlock.h"
#include "NestBlock.h"
#include "WaterBlock.h"
#include "GrassBlock.h"

#include "UELlama/LlamaComponent.h"
#include <Kismet/GameplayStatics.h>
#include "Components/ActorComponent.h"
#include "Misc/OutputDeviceNull.h"


// Sets default values
ASpawner::ASpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PrevOutToken = "blabla";
	WorldMap=
/*1*/	"DDDDDDDWGGGSFFF"
/*2*/	"DDDDGGGWWGGSSSF"
/*3*/	"DGGGGGGWGGGGSSF"
/*4*/	"DGGGGGGWGGGGGSS"
/*5*/	"DGGGGGGWGGGNGGG"
/*6*/	"DGGGGGGWGGGGGGG"
/*7*/	"SGGGGGGWGGGGFGG"
/*8*/	"SGGGGGGWWGGFFFG"
/*9*/	"SGGGGGGWWGGGFGG"
/*10*/	"SGGGGGGWGGGGGGG"
/*11*/	"SGGFGGGWGGGGGGG"
/*12*/	"SGFFFGGWWGGGGGG"
/*13*/	"SGGFGGWWWWGGGGG"
/*14*/	"SGGGGGWWWGGGGGG"
/*15*/	"SSGGGGWWWGGGGGG";
}

// Called when the game starts or when spawned
void ASpawner::BeginPlay()
{
	Super::BeginPlay();
	GenerateMap();
}

// Called every frame
void ASpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpawner::AddAction(FString NewAction)
{
	
}

void ASpawner::SetActions(TArray<FString> NewActions)
{
	
}

void ASpawner::PresentGame()
{
	/*
	UObject* SpawnActor = Cast<UObject>(StaticLoadObject(UObject::StaticClass(), NULL, TEXT("/Game/Blueprints/BP_Animal")));
	TArray<AActor*> ActorsToFind;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), SpawnActor->StaticClass(), ActorsToFind);
	//AActor* Anim = UGameplayStatics::GetActorOfClass(GetWorld(), SpawnActor->StaticClass());
	if (SpawnActor)
		GEngine->AddOnScreenDebugMessage(-1, 150.f, FColor::White, TEXT("spawn find"));
	if (ActorsToFind.IsValidIndex(0))
		GEngine->AddOnScreenDebugMessage(-1, 150.f, FCo}/150lor::White, TEXT("actor found"));// Anim->GetName());
	else
		GEngine->AddOnScreenDebugMessage(-1, 150.f, FColor::White, TEXT("NOOOOOO"));
	
	for (TFieldIterator<FProperty> It(Anim->GetClass()); It; ++It) {
		FProperty* Property = *It;
		if (Property)
			GEngine->AddOnScreenDebugMessage(-1, 150.f, FColor::White, Property->GetName());
	}
	*/	
	InToken ="\n[INST] <Send> Hello! Here a the game rules of your game. </>\n"
		"<Send> Your are playing as crocodile.</>"
		"<Send> Your character has these parameters:</>\n "
		"<Send> HP - amount of health points 100 of 100.</>\n "
		"<Send> Satiety - amount of food 50/100. </>\n "
		"<Send> Fatigue - 100/100. </>\n "
		"<Send> Temperature - 30/100.</>\n"
		"<Send> If your HP is below 0 - you die. If Satiety or Fatigue is below 0, you lose some HP.</>"
		"<Send> If temperature is low or too high - you lose some HP. To restore Satiety - go to forest. </>"
		"<Send> To restore Fatigue - go to nest. Here are some actions that you can do: </>\n "
		"<Send> go_random - go to random location. </>\n "
		"<Send> go_maxforest - go to forest with maximum of food. </>\n"
		"<Send> eat - restore satiety. Attention you need to be in forest first. </>\n"
		"<Send> go_near_(area) - go to nearest area of inputted type.</>\n "
		"<Send> Here are various types of areas: </>\n "
		"<Send> forest, grass, snow, desert, nest, water. </>"
		"<Send> Some examples for command input - go_near_forest, and you will go to nearest forest area to eat. </>"
		"<Send> go_near_water - type it and go swimminng. </>"
		"<Send> Some tips! In desert area your temperature raises high, in snow area - you can freeze.</>" 
		"<Send> I hope you understand this game. Please type your first game move. </> [/INST] \n";
		
	ready = false;
	/*
	AHUD* HUD = GetWorld()->GetFirstPlayerController()->GetHUD();
	// Cast<UObject>(StaticLoadObject(UObject::StaticClass(), NULL, TEXT("/Game/Blueprints/HUD/BP_Hud")));
	if (HUD)
		GEngine->AddOnScreenDebugMessage(-1, 150.f, FColor::White, TEXT("hud found"));
	else
		GEngine->AddOnScreenDebugMessage(-1, 150.f, FColor::White, TEXT("NOOOo hud"));

	FOutputDeviceNull OutputDeviceNull;
	HUD->CallFunctionByNameWithArguments(TEXT("AddPromt"), OutputDeviceNull, nullptr, true);
	
	ULlamaComponent* Llama = reinterpret_cast<ULlamaComponent*>(HUD);
	
	if (Llama)
		GEngine->AddOnScreenDebugMessage(-1, 150.f, FColor::White, TEXT("lama found"));
	else
		GEngine->AddOnScreenDebugMessage(-1, 150.f, FColor::White, TEXT("NOOO) LAMA"));
	Llama->Activate(false);
	if (Llama->IsActive())
		GEngine->AddOnScreenDebugMessage(-1, 150.f, FColor::White, TEXT("lama found"));
	else
		GEngine->AddOnScreenDebugMessage(-1, 150.f, FColor::White, TEXT("NOOO) LAMA")); 
	//Llama->InsertPrompt(InToken);*/
	//ULlamaComponent* Llama = Cast<ULlamaComponent>(StaticLoadObject(ULlamaComponent::StaticClass(), NULL, TEXT("/Game/Blueprints/BP_Animal")));
	//
	//FString::Printf(TEXT("Hello! You are playing as crocodile. Your character has these parameters:\n HP - amount of health points 100 of 100.\n Satiety - amount of food 50/100. \n Fatigue - 100/100. \n Temperature - 30/100. \n If your HP is below 0 - you die. If Satiety or Fatigue is below 0, you lose some HP. If temperature is low or too high - you lose some HP. To restore Satiety - go to forest. To restore Fatigue - go to nest. Here are some actions that you can do: \n go_random - go to random location. \n go_maxforest - go to forest with maximum of food. go_near_<area> - go to nearest area of inputted type.\n Here are various types of areas: \n forest, grass, snow, desert, nest, water. Some examples for command input - go_near_forest, and you will go to nearest forest area to eat. go_near_water - type it and go swimminng. Some tips! In desert area your temperature raises high, in snow area - you can freeze."));
}

void ASpawner::AskAction()
{

}


FString ASpawner::CallNewAction()
{
	return "idle";
}

void ASpawner::GetAnswer()
{
	FTimerDelegate TimerDelegate;
	TimerDelegate.BindLambda([&]
		{
			if ((PrevOutToken == OutToken)&&(PrevOutToken!=""))
			{
				GetWorld()->GetTimerManager().ClearTimer(CheckConditionTimer);
				GEngine->AddOnScreenDebugMessage(-1, 150.f, FColor::White, CheckConditionTimer.ToString()+" hehe " + OutToken);
				ready = true;
				return;
			}
			else
			{
				float t = GetWorld()->GetTimerManager().GetTimerRemaining(CheckConditionTimer);
				GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::White, FString::Printf(TEXT("%f"),t) );
				PrevOutToken = OutToken;
			}
		});
	GetWorld()->GetTimerManager().SetTimer(CheckConditionTimer, TimerDelegate, 25.f, true);
}

void ASpawner::GenerateMap()
{
	int NumBlocks = XSize*YSize;
	int32 BlockIndex = 0;
	FRandomStream Stream(FMath::Rand());
	for (int32 X = 0; X < XSize; X++)
	{
		for (int32 Y = 0; Y < YSize; Y++)
		{
			const float XOffset = X * Size; 
			const float YOffset = Y * Size; 
			// Make position vector, offset from Grid location
			const FVector BlockLocation = FVector(-XOffset, YOffset, 0.f) + GetActorLocation();
			// Spawn a block
			switch (WorldMap[BlockIndex])
			{
			case 'G':
				{
					AGrassBlock* NewBlock = GetWorld()->SpawnActor<AGrassBlock>(BlockLocation, FRotator(0, 0, 0));
					if (NewBlock != nullptr)
						NewBlock->OwningGrid = this;
					break;
				}
			case 'F':
				{
					AForestBlock* NewBlock = GetWorld()->SpawnActor<AForestBlock>(BlockLocation, FRotator(0, 0, 0));
					//GetWorld()->Spawn
					Stream.GenerateNewSeed();
					NewBlock->SetForestAmount(Stream.RandRange(1, 15));
					if (NewBlock != nullptr)
						NewBlock->OwningGrid = this;
					break;
				}
			case 'W':
				{
					AWaterBlock* NewBlock = GetWorld()->SpawnActor<AWaterBlock>(BlockLocation, FRotator(0, 0, 0));
					if (NewBlock != nullptr)
						NewBlock->OwningGrid = this;
					break;
				}
			case 'N':		
				{
					ANestBlock * NewBlock = GetWorld()->SpawnActor<ANestBlock>(BlockLocation, FRotator(0, 0, 0));
					if (NewBlock != nullptr)
						NewBlock->OwningGrid = this;
					break;
				}
			case 'S':
				{
					ASnowBlock * NewBlock = GetWorld()->SpawnActor<ASnowBlock>(BlockLocation, FRotator(0, 0, 0));
					if (NewBlock != nullptr)
						NewBlock->OwningGrid = this;
					break;
				}
			case 'D':
				{
					ADesertBlock * NewBlock = GetWorld()->SpawnActor<ADesertBlock>(BlockLocation, FRotator(0, 0, 0));
					if (NewBlock != nullptr)
						NewBlock->OwningGrid = this;
					break;
				}
			case 'M':
					break;
			default:
				{
					AGrassBlock* NewBlock = GetWorld()->SpawnActor<AGrassBlock>(BlockLocation, FRotator(0, 0, 0));
					if (NewBlock != nullptr)
						NewBlock->OwningGrid = this;
					break;
				}		
			}
			BlockIndex++;
		}
	}
	GEngine->AddOnScreenDebugMessage(-1, 150.f, FColor::White, FString::Printf(TEXT("%d %d"), BlockIndex, WorldMap.Len()));
}


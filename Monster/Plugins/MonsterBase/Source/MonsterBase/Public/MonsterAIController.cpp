// Fill out your copyright notice in the Description page of Project Settings.


#include "MonsterAIController.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"


AMonsterAIController::AMonsterAIController()
{
	AIPerception = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerception"));
}

void AMonsterAIController::BeginPlay()
{
	RunBehaviorTree(BTMonster);
}

void AMonsterAIController::OnTarget()
{
	GetBlackboardComponent()->SetValueAsObject("TargetActor", AIPerception);
	
}


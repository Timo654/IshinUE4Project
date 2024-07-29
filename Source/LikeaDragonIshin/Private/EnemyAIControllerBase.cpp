#include "EnemyAIControllerBase.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "FighterAIPerceptionComponent.h"

AEnemyAIControllerBase::AEnemyAIControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BehaviorTreeComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorTreeComp"));
    this->BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComp"));
    this->AIPerceptionComp = CreateDefaultSubobject<UFighterAIPerceptionComponent>(TEXT("FighterAIPerceptionComp"));
    this->BehaviorTree = NULL;
    this->ControlledFighter = NULL;
}

void AEnemyAIControllerBase::OnPerceptionUpdatedImpl(UAIPerceptionComponent* InAIPerceptionComp, const TArray<AActor*>& InUpdatedActors) {
}



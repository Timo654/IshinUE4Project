#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "EnemyAIControllerBase.generated.h"

class AActor;
class AFighter;
class UAIPerceptionComponent;
class UBehaviorTree;
class UBehaviorTreeComponent;
class UBlackboardComponent;
class UFighterAIPerceptionComponent;

UCLASS(Blueprintable)
class AEnemyAIControllerBase : public AAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBehaviorTreeComponent* BehaviorTreeComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBlackboardComponent* BlackboardComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFighterAIPerceptionComponent* AIPerceptionComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFighter* ControlledFighter;
    
public:
    AEnemyAIControllerBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnPerceptionUpdatedImpl(UAIPerceptionComponent* InAIPerceptionComp, const TArray<AActor*>& InUpdatedActors);
    
};


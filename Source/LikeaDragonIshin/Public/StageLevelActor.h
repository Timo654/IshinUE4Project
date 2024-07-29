#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StageLevelActor.generated.h"

class UStageTagComponent;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API AStageLevelActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStageTagComponent* StageTagComponent;
    
public:
    AStageLevelActor(const FObjectInitializer& ObjectInitializer);

};


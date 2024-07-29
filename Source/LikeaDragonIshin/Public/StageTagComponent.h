#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StageTagComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UStageTagComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Actors;
    
    UStageTagComponent(const FObjectInitializer& ObjectInitializer);

};


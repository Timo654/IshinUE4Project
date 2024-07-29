#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DebugPlayAuthTagComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UDebugPlayAuthTagComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UDebugPlayAuthTagComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetStageFlag(bool bIsAdv, bool bIsBtl, bool bIsAut);
    
};


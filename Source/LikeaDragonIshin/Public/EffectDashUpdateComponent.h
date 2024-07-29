#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EffectDashUpdateComponent.generated.h"

class UCActionEffectDash;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UEffectDashUpdateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCActionEffectDash* EffectDash;
    
    UEffectDashUpdateComponent(const FObjectInitializer& ObjectInitializer);

};


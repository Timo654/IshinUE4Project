#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EEffectEventType.h"
#include "EffectEvent.generated.h"

class UEffectEventPlayer;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API AEffectEvent : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EEffectEventType, UEffectEventPlayer*> EffectEvents;
    
public:
    AEffectEvent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Stop(EEffectEventType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetTransform(EEffectEventType Type, const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable)
    void Play(EEffectEventType Type, bool is_loop);
    
    UFUNCTION(BlueprintCallable)
    bool IsPlay(EEffectEventType Type);
    
    UFUNCTION(BlueprintCallable)
    bool IsLoop(EEffectEventType Type);
    
    UFUNCTION(BlueprintCallable)
    bool IsEnd(EEffectEventType Type);
    
};


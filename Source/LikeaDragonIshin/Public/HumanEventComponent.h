#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EHumanEventType.h"
#include "HumanEventComponent.generated.h"

class UHumanEventPlayer;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UHumanEventComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EHumanEventType, UHumanEventPlayer*> HumanEvents;
    
public:
    UHumanEventComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Stop(EHumanEventType Type);
    
    UFUNCTION(BlueprintCallable)
    void Play(EHumanEventType Type, bool is_loop);
    
    UFUNCTION(BlueprintCallable)
    bool IsPlay(EHumanEventType Type);
    
    UFUNCTION(BlueprintCallable)
    bool IsLoop(EHumanEventType Type);
    
};


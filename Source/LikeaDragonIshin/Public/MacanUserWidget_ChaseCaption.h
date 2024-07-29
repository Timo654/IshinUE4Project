#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_ChaseCaption.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_ChaseCaption : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlaying;
    
    UMacanUserWidget_ChaseCaption();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOutEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayEndInEvent(bool IsSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInEvent(int32 typeIndex);
    
};


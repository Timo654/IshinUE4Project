#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_MngKaraokeMarker.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_MngKaraokeMarker : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 modeIndex;
    
    UMacanUserWidget_MngKaraokeMarker();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WakeEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SleepEvent();
    
};


#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_Subtitles.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_Subtitles : public UMacanUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float delayViewTimer;
    
public:
    UMacanUserWidget_Subtitles();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UpdateText(const FText& InText, const FText& InName, bool isFude);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnDelayView();
    
};


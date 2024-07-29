#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_Main_TougiInfo.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_Main_TougiInfo : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFinishFadeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFinishFadeIn;
    
    UMacanUserWidget_Main_TougiInfo();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInEvent();
    
};


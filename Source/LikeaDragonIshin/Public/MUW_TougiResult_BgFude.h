#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MUW_TougiResult_BgFude.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMUW_TougiResult_BgFude : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFinishFadeIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFinishFadeOut;
    
    UMUW_TougiResult_BgFude();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeIn();
    
};


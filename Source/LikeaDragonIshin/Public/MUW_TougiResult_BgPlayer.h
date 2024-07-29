#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MUW_TougiResult_BgPlayer.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMUW_TougiResult_BgPlayer : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFinishFadeIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFinishFadeOut;
    
    UMUW_TougiResult_BgPlayer();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SwitchPlayerType(int32 ptype);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeIn();
    
};


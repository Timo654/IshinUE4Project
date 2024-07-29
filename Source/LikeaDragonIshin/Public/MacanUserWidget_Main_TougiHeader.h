#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_Main_TougiHeader.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_Main_TougiHeader : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFadeInFinishInfoButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFadeOutFinishInfoButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFadeInFinishTitleMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFadeOutFinishTitleMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFadeInFinishBGPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFadeOutFinishBGPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFadeInFinishBG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFadeOutFinishBG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFadeInFinishBGFude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFadeOutFinishBGFude;
    
    UMacanUserWidget_Main_TougiHeader();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SwitchBGPlayerType(int32 ptype);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTitleTitleModeEvent(int32 mode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutTitleModeEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutInfoButtonEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutBGPlayerEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutBGFudeEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutBGEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInTitleModeEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInInfoButtonEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInBGPlayerEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInBGFudeEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInBGEvent();
    
};


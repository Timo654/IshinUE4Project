#pragma once
#include "CoreMinimal.h"
#include "EUIAnchorType.h"
#include "EUIResultOnOrOff.h"
#include "MacanUIDataWindowBase.h"
#include "MacanUIDataWandererSpeechBubble.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataWandererSpeechBubble : public UMacanUIDataWindowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float animSpeedSecOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float animSpeedSecClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool enableDefaultWakuColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIAnchorType anchorType;
    
    UMacanUIDataWandererSpeechBubble();

    UFUNCTION(BlueprintCallable)
    bool SetOpenSpeed(float sec);
    
    UFUNCTION(BlueprintCallable)
    bool SetCloseSpeed(float sec);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyOpenSpeed(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyCloseSpeed(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void DelDirtyOpenSpeed();
    
    UFUNCTION(BlueprintCallable)
    void DelDirtyCloseSpeed();
    
};


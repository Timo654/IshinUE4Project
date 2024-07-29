#pragma once
#include "CoreMinimal.h"
#include "EMUIDSubCaptionBfType.h"
#include "EUIResultOnOrOff.h"
#include "EUIState.h"
#include "MacanUIData.h"
#include "MacanUIDataSubCaption.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataSubCaption : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 bfData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EMUIDSubCaptionBfType, EUIState> mapUIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 missionNum;
    
    UMacanUIDataSubCaption();

    UFUNCTION(BlueprintCallable)
    void OpenWidget();
    
    UFUNCTION(BlueprintCallable)
    bool IsOnFlag(EUIResultOnOrOff& result, EMUIDSubCaptionBfType Type);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void InCheckMark();
    
    UFUNCTION(BlueprintCallable)
    void DelFlag(EMUIDSubCaptionBfType Type);
    
    UFUNCTION(BlueprintCallable)
    void CloseWidget();
    
};


#pragma once
#include "CoreMinimal.h"
#include "EUIMMTipsBfType.h"
#include "EUIResultOnOrOff.h"
#include "EUIResultSuccessOrFailed.h"
#include "EUIState.h"
#include "MacanUIData.h"
#include "MainMenuTipsCategoryInfo.h"
#include "MainMenuTipsItemInfo.h"
#include "MacanUIDataMainMenuTips.generated.h"

class UMacanUIDataWindowInfo;

UCLASS(Blueprintable)
class UMacanUIDataMainMenuTips : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 bfData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMainMenuTipsCategoryInfo> categoryItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMainMenuTipsItemInfo> tipsItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 currentCategoryIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 currentTipsIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isFocusTipsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIDataWindowInfo* p_uiDataTipsDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EUIMMTipsBfType, EUIState> mapUIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 playingAnimOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 playingAnimClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 playingAnimBlink;
    
    UMacanUIDataMainMenuTips();

    UFUNCTION(BlueprintCallable)
    void SetFlag(EUIMMTipsBfType Type);
    
    UFUNCTION(BlueprintCallable)
    void OpenWidget(EUIMMTipsBfType inType, bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    bool IsOnFlag(EUIResultOnOrOff& result, EUIMMTipsBfType Type);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    EUIState FindUIState(EUIResultSuccessOrFailed& result, EUIMMTipsBfType inType);
    
    UFUNCTION(BlueprintCallable)
    void DelFlag(EUIMMTipsBfType Type);
    
    UFUNCTION(BlueprintCallable)
    void CloseWidget(EUIMMTipsBfType inType, bool isQuick);
    
};


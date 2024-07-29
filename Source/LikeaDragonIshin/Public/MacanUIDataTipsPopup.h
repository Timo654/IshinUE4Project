#pragma once
#include "CoreMinimal.h"
#include "EUIResultOnOrOff.h"
#include "EUIResultSuccessOrFailed.h"
#include "EUIState.h"
#include "EUITipsPopupBfType.h"
#include "MacanUIData.h"
#include "MacanUIDataTipsPopup.generated.h"

class UMacanUIDataWindowInfo;

UCLASS(Blueprintable)
class UMacanUIDataTipsPopup : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 bfData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 currentIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EUITipsPopupBfType, EUIState> mapUIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText titleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText bodyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 playingAnimOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 playingAnimClose;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIDataWindowInfo* m_pTipsDetailUI;
    
public:
    UMacanUIDataTipsPopup();

    UFUNCTION(BlueprintCallable)
    void SetUIStateManual(EUITipsPopupBfType inType, EUIState inState);
    
    UFUNCTION(BlueprintCallable)
    void SetFlag(EUITipsPopupBfType Type);
    
    UFUNCTION(BlueprintCallable)
    void OpenWidget(EUITipsPopupBfType inType, bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    bool IsOnFlag(EUIResultOnOrOff& result, EUITipsPopupBfType Type);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    EUIState FindUIState(EUIResultSuccessOrFailed& result, EUITipsPopupBfType inType);
    
    UFUNCTION(BlueprintCallable)
    void DelFlag(EUITipsPopupBfType Type);
    
    UFUNCTION(BlueprintCallable)
    void CloseWidget(EUITipsPopupBfType inType, bool isQuick);
    
};


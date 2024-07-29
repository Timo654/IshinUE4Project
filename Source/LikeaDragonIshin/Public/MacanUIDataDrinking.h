#pragma once
#include "CoreMinimal.h"
#include "EUIDrinkingWarningType.h"
#include "EUIResultOnOrOff.h"
#include "EUIState.h"
#include "MacanUIData.h"
#include "MacanUIDataDrinking.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataDrinking : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_player_gauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState statePlayerGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_player_gauge_ratio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_diff_player_gauge_ratio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState statePlayerGaugeCursol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateAnnaGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_anna_gauge_ratio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateCutIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_cut_in_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_player_sake_amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_player_sake_bottle_count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_player_sake_bottle_count_new;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateEffRed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateEffBlue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateDrunkFlash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateWin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateLose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_drunk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_drunk_ratio;
    
    UMacanUIDataDrinking();

    UFUNCTION(BlueprintCallable)
    bool SetPlayerSakeBottleCount(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    bool SetPlayerSakeAmount(float Amount);
    
    UFUNCTION(BlueprintCallable)
    bool SetPlayerGaugeRatio(float ratio);
    
    UFUNCTION(BlueprintCallable)
    bool SetDrunk(float drunk);
    
    UFUNCTION(BlueprintCallable)
    bool SetCompanionGaugeDrunkRatio(float ratio);
    
    UFUNCTION(BlueprintCallable)
    bool ReactionUp();
    
    UFUNCTION(BlueprintCallable)
    bool ReactionDown();
    
    UFUNCTION(BlueprintCallable)
    bool PlayWarning(EUIDrinkingWarningType Type);
    
    UFUNCTION(BlueprintCallable)
    bool PlayCutin(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    bool OpenWin();
    
    UFUNCTION(BlueprintCallable)
    bool OpenPlayerGause();
    
    UFUNCTION(BlueprintCallable)
    bool OpenLose();
    
    UFUNCTION(BlueprintCallable)
    bool OpenCompanionGause();
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtySetPlayerSakeBottleCount(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtySetPlayerSakeAmount(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtySetPlayerGaugeRatio(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtySetCompanionGauge(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtySetAnnaGaugeRatio(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyPlayWarning(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyPlayMaruAnim(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyPlayCutIn(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyPlayBatsuAnim(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyOpenCloseCompanionGauge(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyFadeOutPlayerGause(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyFadeOutAnnaGause(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyFadeInPlayerGause(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyFadeInAnnaGause(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyDrunkFlash(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyChangeStateWin(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyChangeStateLose(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool DrunkFlashOn();
    
    UFUNCTION(BlueprintCallable)
    bool DrunkFlashOff();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtySetPlayerSakeBottleCount();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtySetPlayerSakeAmount();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtySetPlayerGaugeRatio();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtySetCompanionGauge();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtySetAnnaGaugeRatio();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyPlayWarning();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyPlayMaruAnim();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyPlayCutIn();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyPlayBatsuAnim();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyOpenCloseCompanionGauge();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyFadeOutPlayerGause();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyFadeOutAnnaGause();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyFadeInPlayerGause();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyFadeInAnnaGause();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyDrunkFlash();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyChangeStateWin();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyChangeStateLose();
    
    UFUNCTION(BlueprintCallable)
    bool CloseWin();
    
    UFUNCTION(BlueprintCallable)
    bool ClosePlayerGause();
    
    UFUNCTION(BlueprintCallable)
    bool CloseLose();
    
    UFUNCTION(BlueprintCallable)
    bool CloseCompanionGause();
    
};


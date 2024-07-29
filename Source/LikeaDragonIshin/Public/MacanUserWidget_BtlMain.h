#pragma once
#include "CoreMinimal.h"
#include "EBtlBuffDebuffStatsType.h"
#include "EBtlStyle.h"
#include "EBtlValuation.h"
#include "InputStateIK.h"
#include "MacanUserWidget.h"
#include "TaishiCardDataList.h"
#include "TaishiCardStatusList.h"
#include "Templates/SubclassOf.h"
#include "MacanUserWidget_BtlMain.generated.h"

class UCanvasPanel;
class UMacanUserWidget_BtlBuffStats;
class UMacanUserWidget_BtlLauncherTop;
class UMacanUserWidget_BtlRengeki;
class UMacanUserWidget_BtlValuationMain;
class UMacanUserWidget_BtlWeaponSel;
class UMacanUserWidget_KillCounterTotal;
class UMacanUserWidget_LevelUpImpl_A;
class UMacanUserWidget_LevelUpImpl_S;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BtlMain : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlLauncherTop* BtlLauncher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlWeaponSel* BtlWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlRengeki* BtlRengeki;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlBuffStats* BtlBuffDebuff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlValuationMain* BtlResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* BtlAdmirable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_LevelUpImpl_S* BtlLevel_S;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_LevelUpImpl_A* BtlLevel_A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* canvas_zetsugi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_KillCounterTotal* BtlKillCounter;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMacanUserWidget> wbp_zetsugi_aim_class;
    
public:
    UMacanUserWidget_BtlMain();

    UFUNCTION(BlueprintCallable)
    void VisibleOn();
    
    UFUNCTION(BlueprintCallable)
    void VisibleOff();
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateValuation(EBtlValuation valuation);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateScore(int32 rank);
    
    UFUNCTION(BlueprintCallable)
    void OnRengekiUpdate(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void OnRengekiReset();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayAdmirable();
    
    UFUNCTION(BlueprintCallable)
    void OnKillCounterUpdate(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void OnInputStateUpdate(FInputState in_state);
    
    UFUNCTION(BlueprintCallable)
    void OnCardStatusUpdate(const FTaishiCardStatusList& card_status_list);
    
    UFUNCTION(BlueprintCallable)
    void OnCardDataUpdate(const FTaishiCardDataList& card_data_list, bool isInitialize, EBtlStyle InitStyle);
    
    UFUNCTION(BlueprintCallable)
    void OnBuffGain(EBtlBuffDebuffStatsType Type, float gauge_val);
    
    UFUNCTION(BlueprintCallable)
    void KillCountOn();
    
    UFUNCTION(BlueprintCallable)
    void KillCountOff();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isPlayingScoreValuation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isPlayingAdmirable() const;
    
    UFUNCTION(BlueprintCallable)
    void abortScoreValuation();
    
    UFUNCTION(BlueprintCallable)
    void abortPlayAdmirable();
    
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EBtlStyle.h"
#include "EUICardLayout.h"
#include "InputStateIK.h"
#include "MacanUserWidget.h"
#include "TaishiCardDataList.h"
#include "TaishiCardStatusList.h"
#include "Templates/SubclassOf.h"
#include "MacanUserWidget_BtlLauncherTop.generated.h"

class UCanvasPanel;
class UMacanUserWidget_BtlLauncher;
class UMacanUserWidget_BtlLauncherSkill;
class UMacanUserWidget_BtlLauncherSkillDetail;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BtlLauncherTop : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlLauncher* launcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlLauncherSkill* skill_EL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlLauncherSkill* skill_CUR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* skillDetailPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMacanUserWidget_BtlLauncherSkillDetail> wbp_skillDetail_class;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTaishiCardDataList card_data;
    
public:
    UMacanUserWidget_BtlLauncherTop();

    UFUNCTION(BlueprintCallable)
    void Update(const FInputState& State);
    
    UFUNCTION(BlueprintCallable)
    void on();
    
    UFUNCTION(BlueprintCallable)
    void off();
    
    UFUNCTION(BlueprintCallable)
    void initCards(EBtlStyle InitializeStyle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector4 getCardRect(EUICardLayout layout) const;
    
    UFUNCTION(BlueprintCallable)
    void CardStateUpdate(const FTaishiCardStatusList& card_state_list);
    
    UFUNCTION(BlueprintCallable)
    void CardDataUpdate(const FTaishiCardDataList& card_data_list);
    
};


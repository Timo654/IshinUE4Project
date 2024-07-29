#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BltLauncherTaishiCardDataList.h"
#include "BltLauncherTaishiCardStatusList.h"
#include "EBtlStyle.h"
#include "EUICardLayout.h"
#include "InputStateIK.h"
#include "LauncherDeviceMode.h"
#include "MacanUserWidget.h"
#include "TaishiCardData.h"
#include "TaishiCardState.h"
#include "MacanUserWidget_BtlLauncher.generated.h"

class UMacanUserWidget_BtlCardMain;
class UMacanUserWidget_LSkillNamePlate;
class UNamedSlot;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BtlLauncher : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* exchange_anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EUICardLayout, UMacanUserWidget_BtlCardMain*> card_widgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBtlStyle, UWidgetAnimation*> style_anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* card_anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EUICardLayout, UWidgetAnimation*> skill_animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EUICardLayout, UMacanUserWidget*> skill_available_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EUICardLayout, UWidgetAnimation*> skill_available_on_animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EUICardLayout, UWidgetAnimation*> skill_available_off_animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EUICardLayout, UMacanUserWidget_LSkillNamePlate*> SkillNameWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* card_in;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* card_out;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* charged_on;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* charged_off;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* ButtonGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EUICardLayout, UNamedSlot*> card_slots;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBtlStyle, FBltLauncherTaishiCardDataList> cards_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBtlStyle, FBltLauncherTaishiCardStatusList> cards_status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* playingSkillAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* playingSkillAvailableAnimation;
    
public:
    UMacanUserWidget_BtlLauncher();

    UFUNCTION(BlueprintCallable)
    void SetState(const FInputState& in_state);
    
    UFUNCTION(BlueprintCallable)
    void setDeviceMode(LauncherDeviceMode mode);
    
    UFUNCTION(BlueprintCallable)
    void setCardStatus(EBtlStyle Style, EUICardLayout layout, const FTaishiCardState& card);
    
    UFUNCTION(BlueprintCallable)
    void setCardData(EBtlStyle Style, EUICardLayout layout, const FTaishiCardData& card);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayCardGaugeBonusAnimBP(int32 layout, int32 bonus_lv);
    
    UFUNCTION(BlueprintCallable)
    void init_cards(EBtlStyle Style);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    LauncherDeviceMode getMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector4 getCardRect(EUICardLayout layout) const;
    
    UFUNCTION(BlueprintCallable)
    void Change2NewCard();
    
};


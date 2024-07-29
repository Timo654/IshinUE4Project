#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "DungeonResultData.h"
#include "MacanUserWidget.h"
#include "Templates/SubclassOf.h"
#include "MacanUserWidget_TaishiDungeonResult_Main.generated.h"

class UCanvasPanel;
class UMacanScrollBox;
class UMacanTextBlock;
class UMacanUserWidget_SimpleProgressBar;
class UMacanUserWidget_TaishiDungeonResult_TabTitle;
class UMacanUserWidget_TaishiDungeonResult_item;
class UPanelWidget;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiDungeonResult_Main : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* elem_end_btn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* elem_missionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_SimpleProgressBar* elem_difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* stamp_switcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* stamp_clear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* stamp_failed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* elem_RewardMoney;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiDungeonResult_TabTitle* elem_tab_title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanScrollBox* item_list_box;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* item_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* escape_info;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMacanUserWidget_TaishiDungeonResult_item> wbp_list_item_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollSpeed;
    
public:
    UMacanUserWidget_TaishiDungeonResult_Main();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibilityWithoutBG(ESlateVisibility in_visibility);
    
    UFUNCTION(BlueprintCallable)
    bool setSelectRecycleWeapon(bool is_select);
    
    UFUNCTION(BlueprintCallable)
    void Play(const FDungeonResultData& Data);
    
    UFUNCTION(BlueprintCallable)
    void Next();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isSelectRecycleWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isNextable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnd() const;
    
};


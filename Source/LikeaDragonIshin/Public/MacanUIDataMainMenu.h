#pragma once
#include "CoreMinimal.h"
#include "EUIMainMenuItemType.h"
#include "EUIResultOnOrOff.h"
#include "EUIState.h"
#include "MacanUIData.h"
#include "MainMenuItemInfo.h"
#include "MainMenuKiryuNouryokuInfo.h"
#include "MainMenuPreviewItemInfo.h"
#include "UIEquipItemData.h"
#include "UIItemItemData.h"
#include "UIMainMenuKyoukaStatusData.h"
#include "WBP_button.h"
#include "MacanUIDataMainMenu.generated.h"

class UMacanUserWidget_TaishiOrganizeTeamAssign;

UCLASS(Blueprintable)
class UMacanUIDataMainMenu : public UMacanUIData {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataMainMenuOpenWindowEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataMainMenuOpenLvUpEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataMainMenuCloseWindowEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataMainMenuCloseLvUpEnd);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState windowUIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMainMenuItemInfo> itemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isForcedUpdateMenuItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIMainMenuItemType selectMenuItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState lvupUIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText infoTextChapter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText infoTextDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText infoTextPlayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText infoTextLv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText infoTextNextExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText infoTextTokuPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMainMenuKiryuNouryokuInfo infoKiryuNouryoku;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsDispKiryuInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText windowTextMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUIItemItemData> arrayPreviewItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isUpdatePreviewItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 columnPreviwItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUIEquipItemData> arrayPreviewEquip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isUpdatePreviewEquip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isUpdatePreviewEmptyEquip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isUpdatePreviewTaishi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIMainMenuKyoukaStatusData previewKyoukaStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isUpdatePreviewKyoukaStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMainMenuPreviewItemInfo previewLetterTextList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMainMenuPreviewItemInfo previewShoujinTextList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMainMenuPreviewItemInfo previewAnotherLifeTextList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMainMenuPreviewItemInfo previewSubstoryTextList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMainMenuPreviewItemInfo previewCompleteTextList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMainMenuPreviewItemInfo previewDictionaryTextList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMainMenuPreviewItemInfo previewMemorandumTextList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWBP_button> previewKeySettingInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isPreviewKeySettingXBO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isDispKeyboardPreviewKeySetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 animWaitCounter;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataMainMenuOpenWindowEnd OnDelegateOpenWindowEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataMainMenuCloseWindowEnd OnDelegateCloseWindowEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataMainMenuOpenLvUpEnd OnDelegateOpenLvUpEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataMainMenuCloseLvUpEnd OnDelegateCloseLvUpEnd;
    
    UMacanUIDataMainMenu();

    UFUNCTION(BlueprintCallable)
    bool UpdatePreviewTaishi();
    
    UFUNCTION(BlueprintCallable)
    bool UpdatePreviewSubStory(FMainMenuPreviewItemInfo Info);
    
    UFUNCTION(BlueprintCallable)
    bool UpdatePreviewShoujin(FMainMenuPreviewItemInfo Info);
    
    UFUNCTION(BlueprintCallable)
    bool UpdatePreviewSetting();
    
    UFUNCTION(BlueprintCallable)
    bool UpdatePreviewNouryoku(FUIMainMenuKyoukaStatusData kyoukaStatus);
    
    UFUNCTION(BlueprintCallable)
    bool UpdatePreviewMemorandum(FMainMenuPreviewItemInfo Info);
    
    UFUNCTION(BlueprintCallable)
    bool UpdatePreviewLetter(FMainMenuPreviewItemInfo Info);
    
    UFUNCTION(BlueprintCallable)
    bool UpdatePreviewItem(UPARAM(Ref) TArray<FUIItemItemData>& inArray, int32 inColumnMax);
    
    UFUNCTION(BlueprintCallable)
    bool UpdatePreviewEquip(UPARAM(Ref) TArray<FUIEquipItemData>& inArray);
    
    UFUNCTION(BlueprintCallable)
    bool UpdatePreviewDictionary(FMainMenuPreviewItemInfo Info);
    
    UFUNCTION(BlueprintCallable)
    bool UpdatePreviewComplete(FMainMenuPreviewItemInfo Info);
    
    UFUNCTION(BlueprintCallable)
    bool UpdatePreviewAnotherLife(FMainMenuPreviewItemInfo Info);
    
    UFUNCTION(BlueprintCallable)
    void UpdateControllerGuide();
    
    UFUNCTION(BlueprintCallable)
    bool SetWindowTextMessage(UPARAM(Ref) FText& InText);
    
    UFUNCTION(BlueprintCallable)
    bool SetSelectMenuItemIndex(int32 inIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetPreviewEmptyEqip(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetMenuIems(UPARAM(Ref) TArray<FMainMenuItemInfo>& inInfoArray, bool isForceUpdate);
    
    UFUNCTION(BlueprintCallable)
    bool SetInfoTextTokuPoint(UPARAM(Ref) FText& InText);
    
    UFUNCTION(BlueprintCallable)
    bool SetInfoTextPlayTime(UPARAM(Ref) FText& InText);
    
    UFUNCTION(BlueprintCallable)
    bool SetInfoTextNextExp(UPARAM(Ref) FText& InText);
    
    UFUNCTION(BlueprintCallable)
    bool SetInfoTextLv(UPARAM(Ref) FText& InText);
    
    UFUNCTION(BlueprintCallable)
    bool SetInfoTextDifficulty(UPARAM(Ref) FText& InText);
    
    UFUNCTION(BlueprintCallable)
    bool SetInfoTextChapter(UPARAM(Ref) FText& InText);
    
    UFUNCTION(BlueprintCallable)
    bool SetInfoKiryuStatus(FMainMenuKiryuNouryokuInfo Info, bool isEnableStatus);
    
    UFUNCTION(BlueprintCallable)
    bool SetEnterMenuItem();
    
    UFUNCTION(BlueprintCallable)
    bool ResetEnterTopMenu();
    
    UFUNCTION(BlueprintCallable)
    bool OpenWindow(bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    bool OpenLvUp(bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    bool IsUsingWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsUsingLvUp(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsOpeningWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsOpeningLvUp(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyResetEnter(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyMessage(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyLvUp(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyItem(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyInfo(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyEnter(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsClosingWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsClosingLvUp(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsBlinkingEnter(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void DelOpeningWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelOpeningLvUp();
    
    UFUNCTION(BlueprintCallable)
    void DelDirtyWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelDirtyResetEnter();
    
    UFUNCTION(BlueprintCallable)
    void DelDirtyMessage();
    
    UFUNCTION(BlueprintCallable)
    void DelDirtyLvUp();
    
    UFUNCTION(BlueprintCallable)
    void DelDirtyItem();
    
    UFUNCTION(BlueprintCallable)
    void DelDirtyInfo();
    
    UFUNCTION(BlueprintCallable)
    void DelDirtyEnter();
    
    UFUNCTION(BlueprintCallable)
    void DelClosingWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelClosingLvUp();
    
    UFUNCTION(BlueprintCallable)
    void DelBlinkingEnter();
    
    UFUNCTION(BlueprintCallable)
    bool CloseWindow(bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    bool CloseLvUp(bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    bool buildTaishiData(UMacanUserWidget_TaishiOrganizeTeamAssign* teamAssign);
    
};


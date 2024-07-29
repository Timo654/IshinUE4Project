#pragma once
#include "CoreMinimal.h"
#include "EUIResultOnOrOff.h"
#include "EUIState.h"
#include "EUITitleMenuBgType.h"
#include "EUITitleMenuItemType.h"
#include "EUITitleMenuListType.h"
#include "MacanUIData.h"
#include "TitleMenuItemInfo.h"
#include "WindowBaseItem.h"
#include "MacanUIDataTitleMenu.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataTitleMenu : public UMacanUIData {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataTitleMenuOpenWindowEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataTitleMenuOpenSubMenuEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataTitleMenuCloseWindowEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataTitleMenuCloseSubMenuEnd);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 bfData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState windowUIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTitleMenuItemInfo> itemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUITitleMenuListType currentMenuListType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUITitleMenuItemType selectMenuItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 selectTopMenuIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 lengthTopMenuList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUITitleMenuItemType currentMenuItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUITitleMenuItemType returnMenuItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWindowBaseItem> selectItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 rightsScrollRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 rightsScrollRateMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUITitleMenuBgType menuBgType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isEnabledShutdownMenu;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataTitleMenuOpenWindowEnd OnDelegateOpenWindowEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataTitleMenuCloseWindowEnd OnDelegateCloseWindowEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataTitleMenuOpenSubMenuEnd OnDelegateOpenSubMenuEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataTitleMenuCloseSubMenuEnd OnDelegateCloseSubMenuEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool DispNewGameBG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool DispSaveIcon;
    
    UMacanUIDataTitleMenu();

    UFUNCTION(BlueprintCallable)
    bool UpdateSelectTopMenuItemIndex();
    
    UFUNCTION(BlueprintCallable)
    bool SetSelectVisibleNewMarktemIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool SetSelectTopMenuItemIndex(int32 inIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectItems(UPARAM(Ref) TArray<FWindowBaseItem>& inSelectItemArray);
    
    UFUNCTION(BlueprintCallable)
    bool SetSelectInvisibleNewMarktemIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool SetSelectFocusedItemIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetSelecteEnterItemIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool SetRightsScrollBoxScrollRate(int32 scroll);
    
    UFUNCTION(BlueprintCallable)
    void SetNextSelectItems(UPARAM(Ref) TArray<FWindowBaseItem>& inSelectItemArray);
    
    UFUNCTION(BlueprintCallable)
    bool SetEnterTopMenu();
    
    UFUNCTION(BlueprintCallable)
    void ResetSelectEnterItem();
    
    UFUNCTION(BlueprintCallable)
    bool ResetEnterTopMenu();
    
    UFUNCTION(BlueprintCallable)
    bool OpenWindow(bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    bool OpenSubMenu(EUITitleMenuItemType forcedOpenType);
    
    UFUNCTION(BlueprintCallable)
    bool IsUsingWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsUsingSubMenu(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsOpeningWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsOpeningSubMenu(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtySubMenu(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtySelectReset(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtySelectEnter(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtySelect(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyRightScoll(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyResetEnter(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyItem(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyEnter(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsClosingWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsClosingSubMenu(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsBlinkingEnter(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void DelUsingSubMenu();
    
    UFUNCTION(BlueprintCallable)
    void DelOpeningWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelOpeningSubMenu();
    
    UFUNCTION(BlueprintCallable)
    void DelDirtyWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelDirtySubMenu();
    
    UFUNCTION(BlueprintCallable)
    void DelDirtySelectReset();
    
    UFUNCTION(BlueprintCallable)
    void DelDirtySelectEnter();
    
    UFUNCTION(BlueprintCallable)
    void DelDirtySelect();
    
    UFUNCTION(BlueprintCallable)
    void DelDirtyRightScoll();
    
    UFUNCTION(BlueprintCallable)
    void DelDirtyResetEnter();
    
    UFUNCTION(BlueprintCallable)
    void DelDirtyItem();
    
    UFUNCTION(BlueprintCallable)
    void DelDirtyEnter();
    
    UFUNCTION(BlueprintCallable)
    void DelClosingWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelClosingSubMenu();
    
    UFUNCTION(BlueprintCallable)
    void DelBlinkingEnter();
    
    UFUNCTION(BlueprintCallable)
    bool CreateTopMenuItems(EUITitleMenuListType listType);
    
    UFUNCTION(BlueprintCallable)
    bool CloseWindow(bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    bool CloseSubMenu();
    
    UFUNCTION(BlueprintCallable)
    void ClearSelectItems();
    
};


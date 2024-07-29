#pragma once
#include "CoreMinimal.h"
#include "EMngKaraokeWindowType.h"
#include "EUIResultOnOrOff.h"
#include "EUIState.h"
#include "MacanUIData.h"
#include "WindowChoiceItemInfo.h"
#include "MacanUIDataKaraokeWindow.generated.h"

class UInputDeviceListener;
class UMUW_MngKaraokeFlashBack;
class UMUW_MngKaraokeSelectMusic;
class UMacanUserWidget;
class UMacanUserWidget_MngKaraokeResult;

UCLASS(Blueprintable)
class UMacanUIDataKaraokeWindow : public UMacanUIData {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataKaraokeWindowOpenWindowEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataKaraokeWindowDecideMenu);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataKaraokeWindowCloseWindowEnd);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EUIState> windowUIStateList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIState selectMusicUIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIState selectDifficultyUIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIState resultUIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIState flashbackUIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIState topmenuUIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIState lyricSelectUIState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* m_pTopMenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMUW_MngKaraokeSelectMusic* m_pSelectMusicWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMUW_MngKaraokeFlashBack* m_pFlashBackWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_MngKaraokeResult* m_pResultWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_MngKaraokeResult* m_plyricTypeWidget;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataKaraokeWindowOpenWindowEnd OnDelegateOpenWindowEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataKaraokeWindowCloseWindowEnd OnDelegateCloseWindowEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_pInputListener;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataKaraokeWindowDecideMenu OnDelegateDecideMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 cursorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWindowChoiceItemInfo> itemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 cursorMusicIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 cursorDifficultyIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isSongOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isWithPartner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isFinishDecideAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 cursorFlashBackIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 greatCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 goodCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 badCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 missCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText songName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText difficultyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText rankName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 cursorLyricTypeIndex;
    
    UMacanUIDataKaraokeWindow();

private:
    UFUNCTION(BlueprintCallable)
    void SetTopMenuWidget(UMacanUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectMusicWidget(UMUW_MngKaraokeSelectMusic* Widget);
    
public:
    UFUNCTION(BlueprintCallable)
    bool SetSelectMusicIndex();
    
    UFUNCTION(BlueprintCallable)
    bool SetSelectLyricTypeIndex();
    
    UFUNCTION(BlueprintCallable)
    bool SetSelectItemIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool SetSelectFlashbackIndex();
    
    UFUNCTION(BlueprintCallable)
    bool SetSelectDifficultyIndex();
    
private:
    UFUNCTION(BlueprintCallable)
    void SetResultWidget(UMacanUserWidget_MngKaraokeResult* Widget);
    
    UFUNCTION(BlueprintCallable)
    void SetLyricTextWidget(UMacanUserWidget_MngKaraokeResult* Widget);
    
    UFUNCTION(BlueprintCallable)
    void SetFlashBackWidget(UMUW_MngKaraokeFlashBack* Widget);
    
public:
    UFUNCTION(BlueprintCallable)
    bool SetEnterMusicIndex();
    
    UFUNCTION(BlueprintCallable)
    bool SetEnterLyricTypeIndex();
    
    UFUNCTION(BlueprintCallable)
    bool SetEnterItemIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool SetEnterFlashbackIndex();
    
    UFUNCTION(BlueprintCallable)
    bool SetEnterDifficultyIndex();
    
    UFUNCTION(BlueprintCallable)
    void ResetEnterItem();
    
    UFUNCTION(BlueprintCallable)
    bool OpenWindow(EMngKaraokeWindowType Type);
    
    UFUNCTION(BlueprintCallable)
    bool IsNowEnter(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyTopMenuIndex(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyTopMenuDecide(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyTopMenu(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtySelectMusicIndex(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtySelectMusicDecide(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtySelectMusic(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtySelectDifficulty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyResultVisible(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyResultDecide(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyLyricTypeVisible(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyLyricTypeIndex(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyLyricTypeDecide(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyFlachBackIndex(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyFlachBackDecide(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyFlachBack(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyDifficultyIndex(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyDifficultyDecide(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsBlinkingEnter(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsAnyDirtyTopMenu(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsAnyDirtySelectMusic(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsAnyDirtyResult(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsAnyDirtyLyricType(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsAnyDirtyFlachBack(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsAnyDirtyDifficulty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    int32 GetItemListNum();
    
    UFUNCTION(BlueprintCallable)
    void DelBfOpeningWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelBfNowEnter();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyTopMenuIndex();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyTopMenuDecide();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyTopMenu();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtySelectMusicIndex();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtySelectMusicDecide();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtySelectMusic();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtySelectDifficulty();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyResultDecide();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyResult();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyLyricTypeVisible();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyLyricTypeIndex();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyLyricTypeDecide();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyFlashBackIndex();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyFlashBackDecide();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyFlashBack();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyDifficultyIndex();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyDifficultyDecide();
    
    UFUNCTION(BlueprintCallable)
    void DelBfClosingWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelBfBlinkingEnter();
    
    UFUNCTION(BlueprintCallable)
    bool DecideMenu();
    
    UFUNCTION(BlueprintCallable)
    bool CloseWindow(EMngKaraokeWindowType Type);
    
    UFUNCTION(BlueprintCallable)
    void ClearItemList();
    
    UFUNCTION(BlueprintCallable)
    bool CancelMenu();
    
    UFUNCTION(BlueprintCallable)
    void AddItemList(FWindowChoiceItemInfo& Info);
    
};


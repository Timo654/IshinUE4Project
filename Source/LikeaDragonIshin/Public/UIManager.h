#pragma once
#include "CoreMinimal.h"
#include "EItemAbilityType.h"
#include "EPadButton.h"
#include "EUIAnimType.h"
#include "EUIColorPreset.h"
#include "EUIDataAssetType.h"
#include "EUIInputDeviceType.h"
#include "EUIInputKeyAndMouse.h"
#include "EUIInputKeyboardType.h"
#include "EUIMacanSystemFontType.h"
#include "EUIMainType.h"
#include "EUIPlatformType.h"
#include "EUIResultSuccessOrFailed.h"
#include "EUIState.h"
#include "EUISwitchingBackColorType.h"
#include "EUISwitchingDisp.h"
#include "EUISwitchingFontColorType.h"
#include "EUISwitchingFontSizeType.h"
#include "EUISwitchingTextWindowColorType.h"
#include "EUIWidgetNoticeType.h"
#include "EUIZOrderType.h"
#include "EWBPButtoniconType.h"
#include "Templates/SubclassOf.h"
#include "TickableGameInstanceSubsystem.h"
#include "UIAnimParamAssetDataRecord.h"
#include "UIBtnGuideItemData.h"
#include "UIColorPresetDataRecord.h"
#include "UIItemAbilityIconPresetDataRecord.h"
#include "UIKeyTexturesIdAssetDataRecord.h"
#include "UIMainWidgetAssetDataRecord.h"
#include "UISystemFontDataRecord.h"
#include "UIZOrderPresetAssetDataRecord.h"
#include "UIManager.generated.h"

class UDataAsset;
class UInputDeviceListener;
class UMacanUIData;
class UMacanUIInfo;
class UMacanUserWidgetBase;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UUIManager : public UTickableGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUIBtnGuideItemData> m_BtnGuideHItemDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState m_BtnGuideHUIState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EUIDataAssetType, UDataAsset*> m_DataAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString m_szHilightTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EUIMainType, UMacanUIInfo*> m_MainWidgets;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UMacanUserWidgetBase>> m_tickWidget_list;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UMacanUserWidgetBase>> m_tickWidget_tmp_list;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UMacanUserWidgetBase>> m_tickWidget_remove_tmp_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIMacanSystemFontType m_SystemFontType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUISwitchingFontSizeType m_CurrentFontSizeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUISwitchingFontSizeType m_SubtitleFontSizeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUISwitchingFontColorType m_TextColorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUISwitchingFontColorType m_TextSpeakerColorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUISwitchingFontColorType m_SubtitleColorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUISwitchingFontColorType m_SubtitleSpeakerColorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUISwitchingBackColorType m_SubtitleBackColorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUISwitchingTextWindowColorType m_TextWindowColorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUISwitchingDisp m_UiDisp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* input_listener;
    
public:
    UUIManager();

    UFUNCTION(BlueprintCallable)
    static void StaticFuncUpdateInvalidationBoxCacheFlag(bool isCanCache);
    
    UFUNCTION(BlueprintCallable)
    static void StaticFuncUpdateBtnGuide(const TArray<FUIBtnGuideItemData>& inArray, EUIMainType inTargetType);
    
    UFUNCTION(BlueprintCallable)
    static void StaticFuncForcedCollectGarbage();
    
    UFUNCTION(BlueprintCallable)
    static EPadButton StaticFuncConvTruePadButtonType(EPadButton inSrcType);
    
    UFUNCTION(BlueprintCallable)
    static EPadButton StaticFuncConvEWBPButtoniconTypeToEPadButton(EWBPButtoniconType inSrcType);
    
    UFUNCTION(BlueprintCallable)
    static EPadButton StaticFuncConvEUIInputKeyAndMouseToEPadButton(EUIInputKeyAndMouse inSrcType);
    
    UFUNCTION(BlueprintCallable)
    static FName StaticFuncConvEPadButtonToFName(EPadButton inSrcType);
    
    UFUNCTION(BlueprintCallable)
    static EWBPButtoniconType StaticFuncConvEPadButtonToEWBPButtoniconType(EPadButton inSrcType);
    
    UFUNCTION(BlueprintCallable)
    static EUIInputKeyAndMouse StaticFuncConvEPadButtonToEUIInputKeyAndMouse(EPadButton inSrcType);
    
    UFUNCTION(BlueprintCallable)
    void SetWidgetNotice(EUIWidgetNoticeType inType);
    
    UFUNCTION(BlueprintCallable)
    bool SetUIState(EUIMainType inType, EUIState inState, bool isCheckNeedForUpdate);
    
    UFUNCTION(BlueprintCallable)
    void SetUiDisp();
    
    UFUNCTION(BlueprintCallable)
    void SetTextWindowColorType();
    
    UFUNCTION(BlueprintCallable)
    void SetTextSpeakerColorType();
    
    UFUNCTION(BlueprintCallable)
    void SetTextColorType();
    
    UFUNCTION(BlueprintCallable)
    void SetSystemFontType();
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitleSpeakerColorType();
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitleFontSizeType();
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitleColorType();
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitleBackColorType();
    
    UFUNCTION(BlueprintCallable)
    void SetEnableCtrl(UMacanUserWidgetBase* Widget);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableCtrl(UMacanUserWidgetBase* Widget);
    
    UFUNCTION(BlueprintCallable)
    bool SetCurrentInputKeyboardType(EUIInputKeyboardType inType);
    
    UFUNCTION(BlueprintCallable)
    bool SetCurrentInputDeviceType(EUIInputDeviceType inType, bool isEnableFordedInputDevide);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentFontSizeType();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveMainWidget(EUIMainType inType);
    
    UFUNCTION(BlueprintCallable)
    bool ReflectChangesByUI(EUIMainType inType);
    
    UFUNCTION(BlueprintCallable)
    bool ReflectChangesBySystem(EUIMainType inType);
    
    UFUNCTION(BlueprintCallable)
    bool ReflectChangesByGame(EUIMainType inType);
    
    UFUNCTION(BlueprintCallable)
    bool Prepare();
    
    UFUNCTION(BlueprintCallable)
    bool LoadMainWidget(EUIMainType inType, bool isAsync);
    
    UFUNCTION(BlueprintCallable)
    bool IsXboxOne();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isMainWidgetLoading(EUIMainType inType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isMainWidgetLoaded(EUIMainType inType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isMainWidgetCreated(EUIMainType inType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isMainWidgetAddedViewport(EUIMainType inType) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAccessibilityHideUI();
    
    UFUNCTION(BlueprintCallable)
    void GetZOrderPresetRecord(EUIZOrderType Target, FUIZOrderPresetAssetDataRecord& record, EUIResultSuccessOrFailed& result);
    
    UFUNCTION(BlueprintCallable)
    void GetUISystemFontRecord(EUIMacanSystemFontType Target, FUISystemFontDataRecord& record, EUIResultSuccessOrFailed& result);
    
    UFUNCTION(BlueprintCallable)
    EUIState GetUIState(EUIMainType inType);
    
    UFUNCTION(BlueprintCallable)
    void GetUIKeyTexturesIdRecord(FName Target, FUIKeyTexturesIdAssetDataRecord& record, EUIResultSuccessOrFailed& result);
    
    UFUNCTION(BlueprintCallable)
    void GetUIInfoAndUIData(EUIMainType inType, UPARAM(Ref) UMacanUIInfo*& uiInfo, UPARAM(Ref) UMacanUIData*& UIData, EUIResultSuccessOrFailed& result);
    
    UFUNCTION(BlueprintCallable)
    UMacanUIInfo* GetUIInfo(EUIMainType inType, EUIResultSuccessOrFailed& result);
    
    UFUNCTION(BlueprintCallable)
    EUISwitchingDisp GetUiDisp();
    
    UFUNCTION(BlueprintCallable)
    void GetUIData(EUIMainType inType, TSubclassOf<UMacanUIData> dataClass, UMacanUIData*& outUIData, EUIResultSuccessOrFailed& result);
    
    UFUNCTION(BlueprintCallable)
    void GetUIAnimParamRecord(EUIAnimType Target, FUIAnimParamAssetDataRecord& record, EUIResultSuccessOrFailed& result);
    
    UFUNCTION(BlueprintCallable)
    EUISwitchingTextWindowColorType GetTextWindowColorType();
    
    UFUNCTION(BlueprintCallable)
    EUISwitchingFontColorType GetTextSpeakerColorType();
    
    UFUNCTION(BlueprintCallable)
    EUISwitchingFontColorType GetTextColorType();
    
    UFUNCTION(BlueprintCallable)
    EUIMacanSystemFontType GetSystemFontType();
    
    UFUNCTION(BlueprintCallable)
    FName GetSystemFontName();
    
    UFUNCTION(BlueprintCallable)
    bool getSwitch_repeat2(EPadButton btn, EUIResultSuccessOrFailed& result);
    
    UFUNCTION(BlueprintCallable)
    bool getSwitch_repeat(EPadButton btn);
    
    UFUNCTION(BlueprintCallable)
    bool getSwitch_push2(EPadButton btn, EUIResultSuccessOrFailed& result);
    
    UFUNCTION(BlueprintCallable)
    bool getSwitch_push(EPadButton btn);
    
    UFUNCTION(BlueprintCallable)
    bool getSwitch_pull2(EPadButton btn, EUIResultSuccessOrFailed& result);
    
    UFUNCTION(BlueprintCallable)
    bool getSwitch_pull(EPadButton btn);
    
    UFUNCTION(BlueprintCallable)
    bool getSwitch_now2(EPadButton btn, EUIResultSuccessOrFailed& result);
    
    UFUNCTION(BlueprintCallable)
    bool getSwitch_now(EPadButton btn);
    
    UFUNCTION(BlueprintCallable)
    EUISwitchingFontColorType GetSubtitleSpeakerColorType();
    
    UFUNCTION(BlueprintCallable)
    EUISwitchingFontSizeType GetSubtitleFontSizeType();
    
    UFUNCTION(BlueprintCallable)
    EUISwitchingFontColorType GetSubtitleColorType();
    
    UFUNCTION(BlueprintCallable)
    EUISwitchingBackColorType GetSubtitleBackColorType();
    
    UFUNCTION(BlueprintCallable)
    void GetMainWidgetRecord(EUIMainType Target, FUIMainWidgetAssetDataRecord& record, EUIResultSuccessOrFailed& result);
    
    UFUNCTION(BlueprintCallable)
    EUIInputDeviceType GetLastInputPadType();
    
    UFUNCTION(BlueprintCallable)
    void getItemAbilityIconRecord(EItemAbilityType skill_type, FUIItemAbilityIconPresetDataRecord& record, EUIResultSuccessOrFailed& result);
    
    UFUNCTION(BlueprintCallable)
    EUIPlatformType GetCurrentPlatformType();
    
    UFUNCTION(BlueprintCallable)
    FString GetCurrentPlatformKeyword();
    
    UFUNCTION(BlueprintCallable)
    EUIInputKeyboardType GetCurrentInputKeyboardType();
    
    UFUNCTION(BlueprintCallable)
    EUIInputDeviceType GetCurrentInputDeviceType();
    
    UFUNCTION(BlueprintCallable)
    EUISwitchingFontSizeType GetCurrentFontSizeType();
    
    UFUNCTION(BlueprintCallable)
    void GetColorPresetRecord(EUIColorPreset Target, FUIColorPresetDataRecord& record, EUIResultSuccessOrFailed& result);
    
    UFUNCTION(BlueprintCallable)
    bool CreateMainWidget(EUIMainType inType);
    
    UFUNCTION(BlueprintCallable)
    bool Cleanup(bool isDestoryALL);
    
    UFUNCTION(BlueprintCallable)
    void CallbackLoadedWidget(EUIMainType inType);
    
    UFUNCTION(BlueprintCallable)
    bool AddViewPortMainWidget(EUIMainType inType);
    
};


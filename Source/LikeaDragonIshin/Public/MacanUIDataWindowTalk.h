#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EUIResultOnOrOff.h"
#include "EUIState.h"
#include "MacanUIData.h"
#include "MacanUIDataWindowTalk.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataWindowTalk : public UMacanUIData {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataWindowTalkOpenWindowNameEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataWindowTalkOpenWindowMessageEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataWindowTalkOpenJibikiEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataWindowTalkOpenAutoBtnEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataWindowTalkCloseWindowNameEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataWindowTalkCloseWindowMessageEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataWindowTalkCloseJibikiEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataWindowTalkCloseAutoBtnEnd);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState windowMessageUIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState windowNameUIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText messageFText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText nameFText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState jibikiUIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isValidAutoWrapText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isVisibleNextButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState autoBtnUIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isAutoBtnOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FColor messageFColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FColor nameFColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool messageIsCentering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ccMessageLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isCCMessageAllDisped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isUsedCCMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ccMessageDispCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString ccMessageDispString;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataWindowTalkOpenWindowMessageEnd OnDelegateOpenWindowMessageEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataWindowTalkCloseWindowMessageEnd OnDelegateCloseWindowMessageEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataWindowTalkOpenWindowNameEnd OnDelegateOpenWindowNameEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataWindowTalkCloseWindowNameEnd OnDelegateCloseWindowNameEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataWindowTalkOpenJibikiEnd OnDelegateOpenJibikiEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataWindowTalkCloseJibikiEnd OnDelegateCloseJibikiEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataWindowTalkOpenAutoBtnEnd OnDelegateOpenAutoBtnEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataWindowTalkCloseAutoBtnEnd OnDelegateCloseAutoBtnEnd;
    
    UMacanUIDataWindowTalk();

    UFUNCTION(BlueprintCallable)
    bool UpdateCCMessageDispCount(int32 inCount);
    
    UFUNCTION(BlueprintCallable)
    bool SetVisibilityNextButton(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    bool SetName(UPARAM(Ref) FText& InText, FColor inColor);
    
    UFUNCTION(BlueprintCallable)
    bool SetMessage(UPARAM(Ref) FText& InText, bool isCentering, FColor inColor, bool isCCMessage);
    
    UFUNCTION(BlueprintCallable)
    bool SetAutoWrapText(bool IsValid);
    
    UFUNCTION(BlueprintCallable)
    bool SetAutoBtnOn();
    
    UFUNCTION(BlueprintCallable)
    bool SetAutoBtnOff();
    
    UFUNCTION(BlueprintCallable)
    bool OpenWindowName(bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    bool OpenWindowMessage(bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    bool OpenJibiki(bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    bool OpenAutoBtn(bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    bool IsOpeningWindowName(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsOpeningWindowMessage(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsOpeningJibiki(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsOpeningAutoBtn(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyWindowName(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyWindowMessage(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyNextButton(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyName(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyMessage(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyJibiki(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyCCMessage(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyAutoWrapText(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyAutoBtn(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsClosingWindowName(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsClosingWindowMessage(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsClosingJibiki(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsClosingAutoBtn(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void DelBfOpeningWindowName();
    
    UFUNCTION(BlueprintCallable)
    void DelBfOpeningWindowMessage();
    
    UFUNCTION(BlueprintCallable)
    void DelBfOpeningJibiki();
    
    UFUNCTION(BlueprintCallable)
    void DelBfOpeningAutoBtn();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyWindowName();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyWindowMessage();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyNextButton();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyName();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyMessage();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyJibiki();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyCCMessage();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyAutoWrapText();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyAutoBtn();
    
    UFUNCTION(BlueprintCallable)
    void DelBfClosingWindowName();
    
    UFUNCTION(BlueprintCallable)
    void DelBfClosingWindowMessage();
    
    UFUNCTION(BlueprintCallable)
    void DelBfClosingJibiki();
    
    UFUNCTION(BlueprintCallable)
    void DelBfClosingAutoBtn();
    
    UFUNCTION(BlueprintCallable)
    bool CloseWindowName(bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    bool CloseWindowMessage(bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    bool CloseJibiki(bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    bool CloseAutoBtn(bool isQuick);
    
};


#pragma once
#include "CoreMinimal.h"
#include "EUIResultOnOrOff.h"
#include "EUIState.h"
#include "EUIYesNoSelectType.h"
#include "MacanUIData.h"
#include "MacanUIDataWindowYesNo.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataWindowYesNo : public UMacanUIData {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataWindowYesNoOpenWindowEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataWindowYesNoDelegatePressedEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataWindowYesNoCloseWindowEnd);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState windowUIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText messageFText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isValidAutoWrapText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIYesNoSelectType nowSelectType;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataWindowYesNoOpenWindowEnd OnDelegateOpenWindowEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataWindowYesNoCloseWindowEnd OnDelegateCloseWindowEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIDataWindowYesNoDelegatePressedEnd OnDelegatePressedEnd;
    
    UMacanUIDataWindowYesNo();

    UFUNCTION(BlueprintCallable)
    void SetSelectType(EUIYesNoSelectType inType);
    
    UFUNCTION(BlueprintCallable)
    bool SetMessage(UPARAM(Ref) FText& InText);
    
    UFUNCTION(BlueprintCallable)
    void SetEnterItem(EUIYesNoSelectType inType);
    
    UFUNCTION(BlueprintCallable)
    bool SetAutoWrapText(bool IsValid);
    
    UFUNCTION(BlueprintCallable)
    void ResetEnterItem();
    
    UFUNCTION(BlueprintCallable)
    bool OpenWindow(bool isQuick, bool NewIsBgBlur);
    
    UFUNCTION(BlueprintCallable)
    bool IsOpeningWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsNowEnter(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyWindowState(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtySelectType(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyMessage(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyEnter(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyAutoWrapText(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsClosingWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsBlinkingEnter(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsBgBlur(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void DelBfOpeningWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelBfEnableBgBlur();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyWindowState();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtySelectType();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyMessage();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyEnter();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyAutoWrapText();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirty();
    
    UFUNCTION(BlueprintCallable)
    void DelBfClosingWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelBfBlinkingEnter();
    
    UFUNCTION(BlueprintCallable)
    bool CloseWindow(bool isQuick);
    
};


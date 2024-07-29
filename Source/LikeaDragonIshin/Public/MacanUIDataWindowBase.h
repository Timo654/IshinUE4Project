#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EUIResultOnOrOff.h"
#include "EUIState.h"
#include "MacanUIData.h"
#include "WindowBaseItem.h"
#include "MacanUIDataWindowBase.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataWindowBase : public UMacanUIData {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataWindowBaceOpenWindowEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataWindowBaceCloseWindowEnd);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState windowUIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWindowBaseItem> itemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isValidAutoWrapText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isVisibleArrowUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isVisibleArrowDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D myPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isRemoveDPIScale;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataWindowBaceOpenWindowEnd OnDelegateOpenWindowEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataWindowBaceCloseWindowEnd OnDelegateCloseWindowEnd;
    
    UMacanUIDataWindowBase();

    UFUNCTION(BlueprintCallable)
    bool SetVisibilityArrowUp(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    bool SetVisibilityArrowDown(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    bool SetPosition(UPARAM(Ref) FVector2D& inPosition, bool inRemoveDPIScale);
    
    UFUNCTION(BlueprintCallable)
    bool SetMessageAndItemName(UPARAM(Ref) FText& inMessage, UPARAM(Ref) FText& inItemName);
    
    UFUNCTION(BlueprintCallable)
    bool SetMessage(UPARAM(Ref) FText& inMessage);
    
    UFUNCTION(BlueprintCallable)
    bool SetAutoWrapText(bool IsValid);
    
    UFUNCTION(BlueprintCallable)
    bool OpenWindow(bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    bool IsUsingWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsOpeningWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyScale(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyPosition(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyItem(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyAutoWrapText(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyArrow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyAngle(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsClosingWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetPosition();
    
    UFUNCTION(BlueprintCallable)
    void DelOpeningWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelDirtyWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelDirtyScale();
    
    UFUNCTION(BlueprintCallable)
    void DelDirtyPosition();
    
    UFUNCTION(BlueprintCallable)
    void DelDirtyItem();
    
    UFUNCTION(BlueprintCallable)
    void DelDirtyAutoWrapText();
    
    UFUNCTION(BlueprintCallable)
    void DelDirtyArrow();
    
    UFUNCTION(BlueprintCallable)
    void DelDirtyAngle();
    
    UFUNCTION(BlueprintCallable)
    void DelClosingWindow();
    
    UFUNCTION(BlueprintCallable)
    bool CloseWindow(bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    bool ClearMessage();
    
    UFUNCTION(BlueprintCallable)
    bool AddMessageAndItemName(UPARAM(Ref) FText& inMessage, UPARAM(Ref) FText& inItemName);
    
    UFUNCTION(BlueprintCallable)
    bool AddMessage(UPARAM(Ref) FText& inMessage);
    
};


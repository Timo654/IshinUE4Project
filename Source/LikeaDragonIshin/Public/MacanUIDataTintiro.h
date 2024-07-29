#pragma once
#include "CoreMinimal.h"
#include "EUIDemeType.h"
#include "EUIResultOnOrOff.h"
#include "EUIState.h"
#include "MacanUIData.h"
#include "TintiroUserInfo.h"
#include "UIDataTintiroDelegateMenuCloseEndDelegate.h"
#include "UIDataTintiroDelegateMenuEnterEndDelegate.h"
#include "MacanUIDataTintiro.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataTintiro : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTintiroUserInfo> UserInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 possessionPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText ResultMessageText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState StateUserInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState statePossessionPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState StateResultMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIDemeType ResultMessageDemeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState StateThreeIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState StateContinueWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CursorContinueWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isUpdateContinueWindowCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool EnterContinueWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isUpdateEnterContinueWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isOpenedContinueWindow;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataTintiroDelegateMenuEnterEnd OnDelegateMenuEnterEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataTintiroDelegateMenuCloseEnd OnDelegateMenuCloseEnd;
    
    UMacanUIDataTintiro();

    UFUNCTION(BlueprintCallable)
    void ShowUserData();
    
    UFUNCTION(BlueprintCallable)
    void ShowThreeIcon();
    
    UFUNCTION(BlueprintCallable)
    void ShowResultMessage();
    
    UFUNCTION(BlueprintCallable)
    void ShowPossessionPoint();
    
    UFUNCTION(BlueprintCallable)
    void SetUserData(int32 ID, FTintiroUserInfo userInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetResultMessage(EUIDemeType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetPossessionPoint(int32 Point);
    
    UFUNCTION(BlueprintCallable)
    bool SetContinueWindowCursor(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool OpenContinueWindow();
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyUserInfo(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyThreeIcon(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyResultMessage(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyPossessionPoint(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyContinueWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    void HideUserData();
    
    UFUNCTION(BlueprintCallable)
    void HideThreeIcon();
    
    UFUNCTION(BlueprintCallable)
    void HideResultMessage();
    
    UFUNCTION(BlueprintCallable)
    void HidePossessionPoint();
    
    UFUNCTION(BlueprintCallable)
    bool EnterContinueWindowCursor();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyUserInfo();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyThreeIcon();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyResultMessage();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyPossessionPoint();
    
    UFUNCTION(BlueprintCallable)
    void DelBfContinueWindow();
    
    UFUNCTION(BlueprintCallable)
    void DecideFinishContinueWindow();
    
    UFUNCTION(BlueprintCallable)
    bool CloseContinueWindow();
    
    UFUNCTION(BlueprintCallable)
    int32 CastMenuCursorPos(int32 cursorPos);
    
};


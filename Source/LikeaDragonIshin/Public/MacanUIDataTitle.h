#pragma once
#include "CoreMinimal.h"
#include "ETitleAnimLanguage.h"
#include "EUIResultOnOrOff.h"
#include "EUIState.h"
#include "MacanUIData.h"
#include "MacanUIDataTitle.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataTitle : public UMacanUIData {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataTitleOpenWindowEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataTitleCloseWindowEnd);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 bfData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState windowUIState;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataTitleOpenWindowEnd OnDelegateOpenWindowEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataTitleCloseWindowEnd OnDelegateCloseWindowEnd;
    
    UMacanUIDataTitle();

    UFUNCTION(BlueprintCallable)
    void SetEnter();
    
    UFUNCTION(BlueprintCallable)
    bool OpenWindow(bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    bool IsUsingWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsOpeningWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyEmter(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsClosingWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsBlinkingEnter(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    ETitleAnimLanguage GetLanguage();
    
    UFUNCTION(BlueprintCallable)
    void DelOpeningWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelDirtyWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelDirtyEnter();
    
    UFUNCTION(BlueprintCallable)
    void DelClosingWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelBlinkingEnter();
    
    UFUNCTION(BlueprintCallable)
    bool CloseWindow(bool isQuick);
    
};


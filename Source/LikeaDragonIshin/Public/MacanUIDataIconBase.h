#pragma once
#include "CoreMinimal.h"
#include "EUIResultOnOrOff.h"
#include "EUIState.h"
#include "MacanUIData.h"
#include "MacanUIDataIconBase.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataIconBase : public UMacanUIData {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataIconBaceOpenIconEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataIconBaceCloseIconEnd);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState iconUIState;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataIconBaceOpenIconEnd OnDelegateOpenIconEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataIconBaceCloseIconEnd OnDelegateCloseIconEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool fpvIconVisible;
    
    UMacanUIDataIconBase();

    UFUNCTION(BlueprintCallable)
    bool OpenIcon(bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    bool IsUsingIcon(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsOpeningIcon(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyIcon(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsClosingIcon(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void DelOpeningIcon();
    
    UFUNCTION(BlueprintCallable)
    void DelDirtyIcon();
    
    UFUNCTION(BlueprintCallable)
    void DelClosingIcon();
    
    UFUNCTION(BlueprintCallable)
    bool CloseIcon(bool isQuick);
    
};


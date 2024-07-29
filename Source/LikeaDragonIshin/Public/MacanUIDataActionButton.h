#pragma once
#include "CoreMinimal.h"
#include "EUIResultOnOrOff.h"
#include "EUIState.h"
#include "EWBPButtoniconType.h"
#include "MacanUIData.h"
#include "MacanUIDataActionButton.generated.h"

class UMacanUserWidget;

UCLASS(Blueprintable)
class UMacanUIDataActionButton : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIState NormalButtonState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsKyougeki;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIState KiwamiButtonState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIState KiwamiExButtonState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIState RendaButtonState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlayingRendaEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWBPButtoniconType RendaButtonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIState CenterButtonState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWBPButtoniconType CenterButtonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CenterButtonSentence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlayKiwami;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlayPressedKiwami;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlayKiwamiEx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHideKiwami;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHideKiwamiEx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlayingKyogeki;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* NormalButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* KiwamiButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* KiwamiExButtonWidget;
    
    UMacanUIDataActionButton();

    UFUNCTION(BlueprintCallable)
    bool IsDirtyRendaButton(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyNormalButton(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyKiwamiExButton(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyKiwamiButton(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyCenterButton(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyRendaButton();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyNormalButton();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyKiwamiExButton();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyKiwamiButton();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyCenterButton();
    
};


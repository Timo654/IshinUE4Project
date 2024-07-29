#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_Main_TougiMenu.generated.h"

class UMacanUserWidget_Tougi_MenuMenu;
class UMacanUserWidget_Tougi_WindowSenseki;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_Main_TougiMenu : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_Tougi_MenuMenu* TougiMenuMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_Tougi_WindowSenseki* TougiWindowSenseki;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFadeOutFinishInfoMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFadeInFinishInfoMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFadeInFinishInfoButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFadeOutFinishInfoButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFadeInFinishSensekiWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFadeOutFinishSensekiWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InfoModeExplanationText;
    
    UMacanUserWidget_Main_TougiMenu();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutSensekiWindowEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutMenuSensekiEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutInfoWindowEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutInfoModeEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutInfoButtonEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInSensekiWindowEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInMenuSensekiEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInInfoWindowEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInInfoModeEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInInfoButtonEvent();
    
};


#pragma once
#include "CoreMinimal.h"
#include "EUIState.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_Otazunemono.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_Otazunemono : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_Otazunemono();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIraishoText(const FText& cond00, const FText& cond01, const FText& kingaku, const FText& Name, const FText& text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Set_Texture_Visible(bool visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Set_Texture(const TSoftObjectPtr<UTexture2D>& inText2D);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeEvent(EUIState State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Fade_Icon_sumi(EUIState State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Fade_Bg_iraisho(EUIState State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Fade_Arrow_iraisho(EUIState State);
    
};


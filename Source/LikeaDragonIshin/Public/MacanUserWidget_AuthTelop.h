#pragma once
#include "CoreMinimal.h"
#include "EUIAuthTelopType.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_AuthTelop.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_AuthTelop : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_AuthTelop();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRenderOpacity(float ratio);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UpdateArasujiAnimSec(float sec);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupTelop(EUIAuthTelopType inType, UTexture2D* inText2D);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupArasujiTelop(const FText& InText);
    
};


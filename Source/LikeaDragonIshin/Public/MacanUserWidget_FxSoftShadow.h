#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Texture.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_FxSoftShadow.generated.h"

class UTextureRenderTarget2D;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_FxSoftShadow : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_FxSoftShadow();

protected:
    UFUNCTION(BlueprintCallable)
    bool DrawUWidgetToTarget(UTextureRenderTarget2D* TextureRenderTarget2D, UWidget* Widget, FVector2D DrawSize, bool UseGamma, TEnumAsByte<TextureFilter> Filter, float DeltaTime);
    
};


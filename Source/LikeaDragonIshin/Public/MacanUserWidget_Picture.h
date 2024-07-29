#pragma once
#include "CoreMinimal.h"
#include "EUIPictureType.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_Picture.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_Picture : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_Picture();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UpdateTexture(int32 inIndex, UTexture2D* inTex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UpdatePictureType(int32 inIndex, EUIPictureType inType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UpdateAlpha(int32 inIndex, float inAlpha);
    
};


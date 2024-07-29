#pragma once
#include "CoreMinimal.h"
#include "Components/Image.h"
#include "EUISwitchingTextWindowColorType.h"
#include "UISwitchingWindowColor.h"
#include "MacanImage.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UMacanImage : public UImage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNoPixelSnapping: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUISwitchingWindowColor _SwitchingWindowColorSet;
    
public:
    UMacanImage();

    UFUNCTION(BlueprintCallable)
    void SetBrushFromSoftTextureHideWhileLoading(TSoftObjectPtr<UTexture2D> SoftTexture, bool bMatchSize);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateSwitchingWindowColor(EUISwitchingTextWindowColorType Type);
    
};


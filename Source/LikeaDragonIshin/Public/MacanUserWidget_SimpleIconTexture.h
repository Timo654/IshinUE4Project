#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_SimpleIconTexture.generated.h"

class UImage;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_SimpleIconTexture : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image;
    
    UMacanUserWidget_SimpleIconTexture();

    UFUNCTION(BlueprintCallable)
    void SetTexture(UTexture2D* tex);
    
};


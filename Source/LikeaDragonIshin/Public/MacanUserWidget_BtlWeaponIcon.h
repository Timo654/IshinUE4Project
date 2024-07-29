#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_BtlWeaponIcon.generated.h"

class UMacanImage;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BtlWeaponIcon : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanImage* Image;
    
    UMacanUserWidget_BtlWeaponIcon();

    UFUNCTION(BlueprintCallable)
    void setIcon(UTexture2D* tex);
    
};


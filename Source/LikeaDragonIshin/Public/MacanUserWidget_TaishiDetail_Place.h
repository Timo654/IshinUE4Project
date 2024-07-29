#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget_TaishiDetailBase.h"
#include "MacanUserWidget_TaishiDetail_Place.generated.h"

class UMacanUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiDetail_Place : public UMacanUserWidget_TaishiDetailBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiDetailBase* detail1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiDetailBase* detail2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiDetailBase* change;
    
    UMacanUserWidget_TaishiDetail_Place();

};


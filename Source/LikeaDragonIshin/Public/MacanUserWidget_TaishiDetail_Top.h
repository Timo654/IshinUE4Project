#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget_TaishiDetailBase.h"
#include "MacanUserWidget_TaishiDetail_Top.generated.h"

class UMacanUserWidget;
class UMacanUserWidget_TaishiDetail_Place;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiDetail_Top : public UMacanUserWidget_TaishiDetailBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiDetail_Place* placeSingle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiDetail_Place* placeOutcome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiDetail_Place* placeMeasure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiDetail_Place* placeSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* levelUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* parameterUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiDetailBase* elem_btn;
    
    UMacanUserWidget_TaishiDetail_Top();

};


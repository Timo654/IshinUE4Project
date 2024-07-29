#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_TaishiReinforcePerform.generated.h"

class UMacanUserWidget_TaishiDetail_DetailFull;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiReinforcePerform : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiDetail_DetailFull* card_detail;
    
    UMacanUserWidget_TaishiReinforcePerform();

};


#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_TaishiElem_Arrow.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiElem_Arrow : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* topArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* bottomArrow;
    
    UMacanUserWidget_TaishiElem_Arrow();

};


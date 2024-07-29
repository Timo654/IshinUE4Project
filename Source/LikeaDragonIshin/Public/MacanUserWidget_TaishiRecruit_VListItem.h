#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_TaishiRecruit_VListItem.generated.h"

class UMacanTextBlock;
class UMacanUserWidget_TaishiElemBase;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiRecruit_VListItem : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* MenuText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiElemBase* NewIcon;
    
    UMacanUserWidget_TaishiRecruit_VListItem();

};


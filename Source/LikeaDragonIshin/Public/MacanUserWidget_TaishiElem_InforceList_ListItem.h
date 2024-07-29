#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_TaishiElem_InforceList_ListItem.generated.h"

class UMacanTextBlock;
class UMacanUserWidget_SimpleIconTexture;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiElem_InforceList_ListItem : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_SimpleIconTexture* elem_icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* elem_name;
    
    UMacanUserWidget_TaishiElem_InforceList_ListItem();

};


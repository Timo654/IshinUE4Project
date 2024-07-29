#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget_TaishiElemBase.h"
#include "MacanUserWidget_TaishiSortieElemLocList.generated.h"

class UMacanUserWidget_TaishiSortieElemLocItem;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiSortieElemLocList : public UMacanUserWidget_TaishiElemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMacanUserWidget_TaishiSortieElemLocItem*> elem_list;
    
    UMacanUserWidget_TaishiSortieElemLocList();

};


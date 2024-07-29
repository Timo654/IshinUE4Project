#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget_TaishiElemBase.h"
#include "MacanUserWidget_TaishiElemVList.generated.h"

class UMacanUserWidget_TaishiElemVlistItem;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiElemVList : public UMacanUserWidget_TaishiElemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMacanUserWidget_TaishiElemVlistItem*> elem_list;
    
    UMacanUserWidget_TaishiElemVList();

};


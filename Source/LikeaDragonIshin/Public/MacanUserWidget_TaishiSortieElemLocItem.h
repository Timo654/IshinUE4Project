#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget_TaishiElemBase.h"
#include "MacanUserWidget_TaishiSortieElemLocItem.generated.h"

class UMacanUserWidget_TaishiSortieElemLocCursor;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiSortieElemLocItem : public UMacanUserWidget_TaishiElemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiElemBase* new_icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiSortieElemLocCursor* elem_cursor;
    
    UMacanUserWidget_TaishiSortieElemLocItem();

};


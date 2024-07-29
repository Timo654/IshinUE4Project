#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget_TaishiElemBase.h"
#include "Templates/SubclassOf.h"
#include "MacanUserWidget_TaishiElemMissionList.generated.h"

class UMacanScrollBox;
class UMacanUserWidget_TaishiElemMissionItem;
class UMacanUserWidget_TaishiElem_Arrow;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiElemMissionList : public UMacanUserWidget_TaishiElemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanScrollBox* scroll_box;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMacanUserWidget_TaishiElemMissionItem> wbp_list_item_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiElem_Arrow* elem_arrow;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMacanUserWidget_TaishiElemMissionItem*> item_list;
    
public:
    UMacanUserWidget_TaishiElemMissionList();

};


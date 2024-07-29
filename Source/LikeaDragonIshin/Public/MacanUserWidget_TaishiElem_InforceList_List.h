#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "Templates/SubclassOf.h"
#include "MacanUserWidget_TaishiElem_InforceList_List.generated.h"

class UImage;
class UMacanScrollBox;
class UMacanUserWidget_TaishiElem_InforceList_ListItem;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiElem_InforceList_List : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanScrollBox* weapon_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* arrow_t;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* arrow_b;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMacanUserWidget_TaishiElem_InforceList_ListItem*> item_list;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMacanUserWidget_TaishiElem_InforceList_ListItem> wbp_list_item_class;
    
public:
    UMacanUserWidget_TaishiElem_InforceList_List();

};


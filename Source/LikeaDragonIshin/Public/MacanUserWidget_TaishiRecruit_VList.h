#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "Templates/SubclassOf.h"
#include "MacanUserWidget_TaishiRecruit_VList.generated.h"

class UMacanUserWidget_TaishiRecruit_VListItem;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiRecruit_VList : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* list_box;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMacanUserWidget_TaishiRecruit_VListItem> wbp_list_item_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMacanUserWidget> wbp_list_item_line_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMacanUserWidget_TaishiRecruit_VListItem*> item_list;
    
public:
    UMacanUserWidget_TaishiRecruit_VList();

};


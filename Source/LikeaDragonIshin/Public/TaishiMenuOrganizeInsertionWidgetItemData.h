#pragma once
#include "CoreMinimal.h"
#include "EMMTAISHIMENU_DEFINE_TABLE.h"
#include "EMMTAISHIMENU_INSERTION_WIDGET_ITEM.h"
#include "TaishiMenuOrganizeInsertionWidgetItemData.generated.h"

USTRUCT(BlueprintType)
struct FTaishiMenuOrganizeInsertionWidgetItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMMTAISHIMENU_DEFINE_TABLE MenuItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMMTAISHIMENU_INSERTION_WIDGET_ITEM> WidgetItemArray;
    
    LIKEADRAGONISHIN_API FTaishiMenuOrganizeInsertionWidgetItemData();
};


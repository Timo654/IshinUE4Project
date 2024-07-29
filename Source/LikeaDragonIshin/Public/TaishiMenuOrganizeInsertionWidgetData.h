#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMMTAISHIMENU_INSERTION_WIDGET_ITEM.h"
#include "TaishiMenuOrganizeInsertionWidgetData.generated.h"

USTRUCT(BlueprintType)
struct FTaishiMenuOrganizeInsertionWidgetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMMTAISHIMENU_INSERTION_WIDGET_ITEM WidgetItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath WidgetPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InsertPointIndex;
    
    LIKEADRAGONISHIN_API FTaishiMenuOrganizeInsertionWidgetData();
};


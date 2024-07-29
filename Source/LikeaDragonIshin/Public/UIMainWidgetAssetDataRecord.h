#pragma once
#include "CoreMinimal.h"
#include "EUICategory.h"
#include "EUIMainType.h"
#include "EUIOwningType.h"
#include "EUISubCategory.h"
#include "EUIZOrderType.h"
#include "Templates/SubclassOf.h"
#include "UIMainWidgetAssetDataRecord.generated.h"

class UMacanUIData;

USTRUCT(BlueprintType)
struct FUIMainWidgetAssetDataRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIMainType MainType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUICategory category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUISubCategory SubCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIZOrderType ZOrderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIOwningType OwningType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WidgetPathStr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMacanUIData> UIDataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsResident;
    
    LIKEADRAGONISHIN_API FUIMainWidgetAssetDataRecord();
};


#pragma once
#include "CoreMinimal.h"
#include "CostumeData_TableRow.h"
#include "CostumeTblData_TableRow.h"
#include "CostumeData.generated.h"

USTRUCT(BlueprintType)
struct FCostumeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCostumeTblData_TableRow meta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCostumeData_TableRow> dataList;
    
    LIKEADRAGONISHIN_API FCostumeData();
};


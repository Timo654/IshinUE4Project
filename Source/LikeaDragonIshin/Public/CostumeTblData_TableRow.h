#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECHANGE_TARGET.h"
#include "CostumeTblData_TableRow.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FCostumeTblData_TableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECHANGE_TARGET Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTbl;
    
    LIKEADRAGONISHIN_API FCostumeTblData_TableRow();
};


#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECOSTUME_TYPE.h"
#include "EDlcId.h"
#include "CostumeData_TableRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FCostumeData_TableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECOSTUME_TYPE Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Detail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDlcId DlcId;
    
    LIKEADRAGONISHIN_API FCostumeData_TableRow();
};


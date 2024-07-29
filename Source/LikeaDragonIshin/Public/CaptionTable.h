#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CaptionTable.generated.h"

USTRUCT(BlueprintType)
struct FCaptionTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText captionText;
    
    LIKEADRAGONISHIN_API FCaptionTable();
};


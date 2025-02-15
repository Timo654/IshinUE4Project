#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CaptionKatagaki.generated.h"

USTRUCT(BlueprintType)
struct FCaptionKatagaki : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextureName;
    
    LIKEADRAGONISHIN_API FCaptionKatagaki();
};


#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HarukaGaugeParam.generated.h"

USTRUCT(BlueprintType)
struct FHarukaGaugeParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    LIKEADRAGONISHIN_API FHarukaGaugeParam();
};


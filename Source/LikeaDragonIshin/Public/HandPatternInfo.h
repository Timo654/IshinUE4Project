#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "EHandPatternMotionType.h"
#include "HandPatternInfo.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FHandPatternInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHandPatternMotionType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath HandPatternPath;
    
    FHandPatternInfo();
};


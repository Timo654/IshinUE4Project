#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "PtcCommon.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FPtcCommon : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath NiagaraPath;
    
    FPtcCommon();
};


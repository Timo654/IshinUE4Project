#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "PtcCommonList.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FPtcCommonList : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath TablePath;
    
    FPtcCommonList();
};


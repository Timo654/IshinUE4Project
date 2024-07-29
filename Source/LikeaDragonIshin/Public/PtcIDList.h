#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PtcIDList.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FPtcIDList : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 dummy;
    
    FPtcIDList();
};


#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PtcBrnRate.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FPtcBrnRate : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> BranchNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BranchId;
    
    FPtcBrnRate();
};


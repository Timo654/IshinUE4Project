#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "SetPtc.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FSetPtc : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath TablePath;
    
    FSetPtc();
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "EffectSequenceInfo.generated.h"

USTRUCT(BlueprintType)
struct FEffectSequenceInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath SequencePath;
    
    LIKEADRAGONISHIN_API FEffectSequenceInfo();
};


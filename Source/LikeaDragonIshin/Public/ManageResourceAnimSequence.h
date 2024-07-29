#pragma once
#include "CoreMinimal.h"
#include "ManageResourceAnimSequence.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FManageResourceAnimSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* pData;
    
    LIKEADRAGONISHIN_API FManageResourceAnimSequence();
};


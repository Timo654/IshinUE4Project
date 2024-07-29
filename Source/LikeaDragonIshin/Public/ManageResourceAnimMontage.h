#pragma once
#include "CoreMinimal.h"
#include "ManageResourceAnimMontage.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FManageResourceAnimMontage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* pData;
    
    LIKEADRAGONISHIN_API FManageResourceAnimMontage();
};


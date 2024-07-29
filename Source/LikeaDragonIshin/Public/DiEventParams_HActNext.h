#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_HActNext.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_HActNext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString next_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Jump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SuccessQte;
    
    LIKEADRAGONISHIN_API FDiEventParams_HActNext();
};


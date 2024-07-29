#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHumanHeight.h"
#include "StHumanHeight.generated.h"

USTRUCT(BlueprintType)
struct FStHumanHeight : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHumanHeight Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    LIKEADRAGONISHIN_API FStHumanHeight();
};


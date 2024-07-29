#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LocalizedTextData.generated.h"

USTRUCT(BlueprintType)
struct FLocalizedTextData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FSoftObjectPath> stringTables;
    
    LIKEADRAGONISHIN_API FLocalizedTextData();
};


#pragma once
#include "CoreMinimal.h"
#include "ChohanDemeInfo.generated.h"

USTRUCT(BlueprintType)
struct FChohanDemeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 playCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 firstDiceNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 secondDiceNumber;
    
    LIKEADRAGONISHIN_API FChohanDemeInfo();
};


#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "JobTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FJobTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    LIKEADRAGONISHIN_API FJobTickFunction();
};

template<>
struct TStructOpsTypeTraits<FJobTickFunction> : public TStructOpsTypeTraitsBase2<FJobTickFunction>
{
    enum
    {
        WithCopy = false
    };
};


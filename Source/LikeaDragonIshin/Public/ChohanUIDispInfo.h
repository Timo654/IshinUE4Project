#pragma once
#include "CoreMinimal.h"
#include "ChohanUIDispInfo.generated.h"

USTRUCT(BlueprintType)
struct FChohanUIDispInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsAcceptInput;
    
    LIKEADRAGONISHIN_API FChohanUIDispInfo();
};


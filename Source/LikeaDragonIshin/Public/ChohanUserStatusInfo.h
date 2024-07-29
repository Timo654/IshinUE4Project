#pragma once
#include "CoreMinimal.h"
#include "EUIChohanConditionType.h"
#include "ChohanUserStatusInfo.generated.h"

USTRUCT(BlueprintType)
struct FChohanUserStatusInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText UserName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIChohanConditionType conditionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsCho;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 betPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsKiryu;
    
    LIKEADRAGONISHIN_API FChohanUserStatusInfo();
};


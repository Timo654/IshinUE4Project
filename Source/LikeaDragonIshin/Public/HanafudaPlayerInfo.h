#pragma once
#include "CoreMinimal.h"
#include "EHanafudaPlayerType.h"
#include "HanafudaPlayerInfo.generated.h"

USTRUCT(BlueprintType)
struct FHanafudaPlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EHanafudaPlayerType playerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText playerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Point;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 possessionPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 oyaMonth;
    
    LIKEADRAGONISHIN_API FHanafudaPlayerInfo();
};


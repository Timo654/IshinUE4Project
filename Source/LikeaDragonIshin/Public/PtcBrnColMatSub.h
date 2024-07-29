#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PtcBrnColMatSub.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FPtcBrnColMatSub : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MaterialName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParticleID;
    
    FPtcBrnColMatSub();
};


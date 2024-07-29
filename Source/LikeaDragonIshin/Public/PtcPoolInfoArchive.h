#pragma once
#include "CoreMinimal.h"
#include "PtcPoolInfo.h"
#include "PtcPoolInfoArchive.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FPtcPoolInfoArchive {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> IDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FPtcPoolInfo> ParticlePoolList;
    
    FPtcPoolInfoArchive();
};


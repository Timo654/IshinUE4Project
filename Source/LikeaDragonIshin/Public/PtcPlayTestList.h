#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PtcPlayTestList.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FPtcPlayTestList : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ParticleID;
    
    FPtcPlayTestList();
};


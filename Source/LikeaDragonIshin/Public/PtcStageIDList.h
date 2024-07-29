#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PtcStageIDList.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FPtcStageIDList : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AddStageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ParticleIDList;
    
    FPtcStageIDList();
};


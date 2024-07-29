#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PtcOneshotSE.generated.h"

class USoundAtomCue;
class USoundAtomCueSheet;

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FPtcOneshotSE : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* Cue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* CueSheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_2d;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_PlayEndStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_ResidentQueSheet;
    
    FPtcOneshotSE();
};


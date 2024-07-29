#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SoundAuthCue.generated.h"

class USoundAtomCue;
class USoundAtomCueSheet;

USTRUCT(BlueprintType)
struct FSoundAuthCue : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AuthName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCue> Cue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCueSheet> CueSheet;
    
    LIKEADRAGONISHIN_API FSoundAuthCue();
};


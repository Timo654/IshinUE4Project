#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SoundCueIDName.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct FSoundCueIDName : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCue> Cue;
    
    LIKEADRAGONISHIN_API FSoundCueIDName();
};


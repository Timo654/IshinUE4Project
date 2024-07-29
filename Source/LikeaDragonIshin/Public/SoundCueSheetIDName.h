#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SoundCueSheetIDName.generated.h"

class USoundAtomCueSheet;

USTRUCT(BlueprintType)
struct FSoundCueSheetIDName : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCueSheet> CueSheet;
    
    LIKEADRAGONISHIN_API FSoundCueSheetIDName();
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EUIColorPreset.h"
#include "UIColorPresetDataRecord.generated.h"

USTRUCT(BlueprintType)
struct FUIColorPresetDataRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIColorPreset Enum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    LIKEADRAGONISHIN_API FUIColorPresetDataRecord();
};


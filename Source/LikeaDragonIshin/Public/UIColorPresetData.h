#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "UIColorPresetData.generated.h"

USTRUCT(BlueprintType)
struct FUIColorPresetData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    LIKEADRAGONISHIN_API FUIColorPresetData();
};


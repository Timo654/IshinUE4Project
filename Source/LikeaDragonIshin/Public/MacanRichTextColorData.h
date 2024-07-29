#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "MacanRichTextColorData.generated.h"

USTRUCT(BlueprintType)
struct FMacanRichTextColorData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    LIKEADRAGONISHIN_API FMacanRichTextColorData();
};


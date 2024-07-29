#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "AnimBlueprintFileInfo.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FAnimBlueprintFileInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath AnimBlueprintPath;
    
    FAnimBlueprintFileInfo();
};


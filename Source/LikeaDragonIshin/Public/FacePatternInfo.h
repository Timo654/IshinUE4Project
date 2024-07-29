#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "EFacePatternType.h"
#include "FacePatternInfo.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FFacePatternInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFacePatternType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath FacePatternPath;
    
    FFacePatternInfo();
};


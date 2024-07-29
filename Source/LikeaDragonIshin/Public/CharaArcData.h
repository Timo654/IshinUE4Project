#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECharaArcFileType.h"
#include "CharaArcData.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FCharaArcData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharaArcFileType FileType;
    
    FCharaArcData();
};


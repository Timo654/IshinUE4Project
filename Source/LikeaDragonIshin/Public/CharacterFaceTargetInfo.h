#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "EFaceTargetType.h"
#include "CharacterFaceTargetInfo.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FCharacterFaceTargetInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaceTargetType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath FaceTargetPath;
    
    FCharacterFaceTargetInfo();
};


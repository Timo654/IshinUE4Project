#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StSequenceAsset.generated.h"

USTRUCT(BlueprintType)
struct FStSequenceAsset : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SubLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KeyconfigSceneID;
    
    LIKEADRAGONISHIN_API FStSequenceAsset();
};


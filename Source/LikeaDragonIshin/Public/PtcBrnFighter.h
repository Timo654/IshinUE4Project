#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PtcBrnFighter.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FPtcBrnFighter : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EnemyId;
    
    FPtcBrnFighter();
};


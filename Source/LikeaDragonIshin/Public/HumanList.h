#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HumanList.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FHumanList : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tmp;
    
    FHumanList();
};


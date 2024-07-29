#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SoundLargeEnum.generated.h"

USTRUCT(BlueprintType)
struct FSoundLargeEnum : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    LIKEADRAGONISHIN_API FSoundLargeEnum();
};


#pragma once
#include "CoreMinimal.h"
#include "MngNichibuResultInfo.generated.h"

USTRUCT(BlueprintType)
struct FMngNichibuResultInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText songNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText difficultyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 maxComboCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 scoreCount;
    
    LIKEADRAGONISHIN_API FMngNichibuResultInfo();
};


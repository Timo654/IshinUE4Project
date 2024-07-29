#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EKurenaikenbuState.h"
#include "SkillFireOption.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FSkillFireOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Kaendama_IsRightHand_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKurenaikenbuState KurenaikenbuState_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform KyuuinOffset_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform ShinhadouOffset_;
    
    FSkillFireOption();
};


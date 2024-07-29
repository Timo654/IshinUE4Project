#pragma once
#include "CoreMinimal.h"
#include "EItemAbilityRarity.h"
#include "EItemAbilityType.h"
#include "ItemAbilityDispData.generated.h"

USTRUCT(BlueprintType)
struct FItemAbilityDispData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemAbilityRarity rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemAbilityType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isKaku;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isUnique;
    
    LIKEADRAGONISHIN_API FItemAbilityDispData();
};


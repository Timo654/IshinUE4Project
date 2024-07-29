#pragma once
#include "CoreMinimal.h"
#include "BltBuffStatsBuffIconEntity.generated.h"

class UMacanUserWidget;

USTRUCT(BlueprintType)
struct FBltBuffStatsBuffIconEntity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* Widget;
    
    LIKEADRAGONISHIN_API FBltBuffStatsBuffIconEntity();
};


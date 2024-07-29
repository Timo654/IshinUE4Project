#pragma once
#include "CoreMinimal.h"
#include "MacanWidgetSplitCreator_RefData.generated.h"

class UGameManager;

USTRUCT(BlueprintType)
struct FMacanWidgetSplitCreator_RefData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameManager* game_manager;
    
    LIKEADRAGONISHIN_API FMacanWidgetSplitCreator_RefData();
};


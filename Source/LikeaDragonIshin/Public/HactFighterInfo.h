#pragma once
#include "CoreMinimal.h"
#include "HactFighterInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FHactFighterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* attach_parent;
    
    LIKEADRAGONISHIN_API FHactFighterInfo();
};


#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WandererAliasList.h"
#include "Devil2HumanSpawner.generated.h"

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API ADevil2HumanSpawner : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AliasString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWandererAliasList Alias;
    
    ADevil2HumanSpawner(const FObjectInitializer& ObjectInitializer);

};


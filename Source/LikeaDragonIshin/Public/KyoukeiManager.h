#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KyoukeiManager.generated.h"

class AKyoukeiResource;

UCLASS(Blueprintable)
class AKyoukeiManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKyoukeiResource* mp_manager_resource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RaceDistanceMode;
    
public:
    AKyoukeiManager(const FObjectInitializer& ObjectInitializer);

};


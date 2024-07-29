#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "AreaStreamingVolume.generated.h"

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API AAreaStreamingVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> StreamingLevelNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AreaID;
    
    AAreaStreamingVolume(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "DiEventElementPlayerBase.h"
#include "DVEPl_TrackAsset.generated.h"

class UEffectTrackComponent;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UDVEPl_TrackAsset : public UDiEventElementPlayerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEffectTrackComponent* EffectTrack;
    
public:
    UDVEPl_TrackAsset();

};


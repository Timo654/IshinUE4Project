#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ESurfaceType.h"
#include "SurfaceTypeDataAsset.generated.h"

class UPhysicalMaterial;

UCLASS(Blueprintable)
class USurfaceTypeDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESurfaceType, UPhysicalMaterial*> ConvertMap;
    
    USurfaceTypeDataAsset();

};


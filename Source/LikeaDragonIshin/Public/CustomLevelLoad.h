#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CustomLevelLoad.generated.h"

UCLASS(Abstract, Blueprintable)
class UCustomLevelLoad : public UDataAsset {
    GENERATED_BODY()
public:
    UCustomLevelLoad();

};


#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EUIZOrderType.h"
#include "UIZOrderPresetAssetDataRecord.h"
#include "UIZOrderPreset.generated.h"

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UUIZOrderPreset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EUIZOrderType, FUIZOrderPresetAssetDataRecord> Data;
    
    UUIZOrderPreset();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};


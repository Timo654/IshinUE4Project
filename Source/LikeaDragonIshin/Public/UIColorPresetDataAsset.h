#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EUIColorPreset.h"
#include "UIColorPresetDataRecord.h"
#include "UIColorPresetDataAsset.generated.h"

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UUIColorPresetDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EUIColorPreset, FUIColorPresetDataRecord> Data;
    
    UUIColorPresetDataAsset();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};


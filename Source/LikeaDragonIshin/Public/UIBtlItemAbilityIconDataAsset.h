#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EItemAbilityType.h"
#include "UIItemAbilityIconPresetDataRecord.h"
#include "UIBtlItemAbilityIconDataAsset.generated.h"

UCLASS(Blueprintable)
class UUIBtlItemAbilityIconDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EItemAbilityType, FUIItemAbilityIconPresetDataRecord> Data;
    
    UUIBtlItemAbilityIconDataAsset();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};


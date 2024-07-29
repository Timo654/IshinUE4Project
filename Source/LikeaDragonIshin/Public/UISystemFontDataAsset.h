#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EUIMacanSystemFontType.h"
#include "UISystemFontDataRecord.h"
#include "UISystemFontDataAsset.generated.h"

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UUISystemFontDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EUIMacanSystemFontType, FUISystemFontDataRecord> Data;
    
    UUISystemFontDataAsset();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};


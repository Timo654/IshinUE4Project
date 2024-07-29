#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UIKeyTexturesIdAssetDataRecord.h"
#include "UIKeyTexturesIdDataAsset.generated.h"

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UUIKeyTexturesIdDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FUIKeyTexturesIdAssetDataRecord> Data;
    
    UUIKeyTexturesIdDataAsset();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};


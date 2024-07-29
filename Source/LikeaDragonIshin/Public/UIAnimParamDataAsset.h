#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EUIAnimType.h"
#include "UIAnimParamAssetDataRecord.h"
#include "UIAnimParamDataAsset.generated.h"

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UUIAnimParamDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EUIAnimType, FUIAnimParamAssetDataRecord> Data;
    
    UUIAnimParamDataAsset();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};


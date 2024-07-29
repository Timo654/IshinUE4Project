#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EUIMainType.h"
#include "UIMainWidgetAssetDataRecord.h"
#include "UIMainWidgetDataAsset.generated.h"

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UUIMainWidgetDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EUIMainType, FUIMainWidgetAssetDataRecord> Data;
    
    UUIMainWidgetDataAsset();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};


#pragma once
#include "CoreMinimal.h"
#include "MacanUIData.h"
#include "MacanUIDataKyukyokutougiGame.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataKyukyokutougiGame : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlaying;
    
    UMacanUIDataKyukyokutougiGame();

};


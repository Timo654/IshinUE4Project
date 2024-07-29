#pragma once
#include "CoreMinimal.h"
#include "MacanUIData.h"
#include "MacanUIDataTimer.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataTimer : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Minute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Second;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 miliSecond;
    
    UMacanUIDataTimer();

};


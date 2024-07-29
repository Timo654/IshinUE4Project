#pragma once
#include "CoreMinimal.h"
#include "ActionMinigame.h"
#include "ActionDrinking.generated.h"

class UInputDeviceListener;
class UMacanUIDataDrinking;
class UUIManager;

UCLASS(Blueprintable)
class UActionDrinking : public UActionMinigame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* listener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIDataDrinking* UIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIManager* pUIManager;
    
    UActionDrinking();

};


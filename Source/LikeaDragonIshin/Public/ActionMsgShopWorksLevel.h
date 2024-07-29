#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionMsgShopWorksLevel.generated.h"

class UInputDeviceListener;

UCLASS(Blueprintable)
class UActionMsgShopWorksLevel : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* listener;
    
public:
    UActionMsgShopWorksLevel();

};


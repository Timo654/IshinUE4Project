#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionShop.generated.h"

class UInputDeviceListener;

UCLASS(Blueprintable)
class UActionShop : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* listener;
    
public:
    UActionShop();

};


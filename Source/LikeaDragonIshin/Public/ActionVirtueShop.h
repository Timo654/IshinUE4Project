#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionVirtueShop.generated.h"

class UInputDeviceListener;

UCLASS(Blueprintable)
class UActionVirtueShop : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* listener;
    
public:
    UActionVirtueShop();

};


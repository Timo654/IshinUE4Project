#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionMenuSetting.generated.h"

class UInputDeviceListener;

UCLASS(Blueprintable)
class UActionMenuSetting : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_listener;
    
public:
    UActionMenuSetting();

};


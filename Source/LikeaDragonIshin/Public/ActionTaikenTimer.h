#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionTaikenTimer.generated.h"

class UInputDeviceListener;

UCLASS(Blueprintable)
class UActionTaikenTimer : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_plistener;
    
public:
    UActionTaikenTimer();

};


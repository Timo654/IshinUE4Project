#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionNotification.generated.h"

class UInputDeviceListener;

UCLASS(Blueprintable)
class UActionNotification : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_plistener;
    
public:
    UActionNotification();

};


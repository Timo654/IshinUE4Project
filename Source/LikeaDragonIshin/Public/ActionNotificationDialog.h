#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionNotificationDialog.generated.h"

class UInputDeviceListener;
class UMacanUIDataWindowConfirmation;

UCLASS(Blueprintable)
class UActionNotificationDialog : public UActionObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMacanUIDataWindowConfirmation* m_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_plistener;
    
public:
    UActionNotificationDialog();

};


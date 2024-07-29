#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionPlayGoMessage.generated.h"

class UInputDeviceListener;
class UMacanUIDataWindowConfirmation;

UCLASS(Blueprintable)
class UActionPlayGoMessage : public UActionObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_plistener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMacanUIDataWindowConfirmation* m_pConfirm;
    
    UActionPlayGoMessage();

};


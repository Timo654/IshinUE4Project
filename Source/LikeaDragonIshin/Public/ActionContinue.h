#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionContinue.generated.h"

class UInputDeviceListener;
class UMacanUIDataWindowChoice;
class UMacanUIDataWindowYesNo;

UCLASS(Blueprintable)
class UActionContinue : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_plistener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMacanUIDataWindowChoice* m_window_choice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMacanUIDataWindowYesNo* m_window_yesno;
    
public:
    UActionContinue();

};


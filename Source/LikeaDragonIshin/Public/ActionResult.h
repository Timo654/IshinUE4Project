#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionResult.generated.h"

class UInputDeviceListener;
class UMacanUIDataWindowConfirmation;
class UMacanUIDataWindowItemGet;
class UMacanUIData_ClearResult;

UCLASS(Blueprintable)
class UActionResult : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMacanUIDataWindowConfirmation* m_pConfirm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_plistener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMacanUIDataWindowItemGet* m_pItemGet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMacanUIData_ClearResult* m_pClearResult;
    
public:
    UActionResult();

};


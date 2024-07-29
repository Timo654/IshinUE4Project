#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionBattleResultDetail.generated.h"

class UInputDeviceListener;
class UMacanUserWidget_BtlResultMain;

UCLASS(Blueprintable)
class UActionBattleResultDetail : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_plistener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlResultMain* m_result_widget;
    
public:
    UActionBattleResultDetail();

};


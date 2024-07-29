#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionUltimateSelect.generated.h"

class UInputDeviceListener;
class UMacanUIDataKyukyokutougi;

UCLASS(Blueprintable)
class UActionUltimateSelect : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_plistener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMacanUIDataKyukyokutougi* m_UIData;
    
public:
    UActionUltimateSelect();

};


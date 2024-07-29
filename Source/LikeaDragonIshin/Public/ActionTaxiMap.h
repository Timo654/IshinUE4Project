#pragma once
#include "CoreMinimal.h"
#include "ActionObjectInputDeviceBase.h"
#include "ActionTaxiMap.generated.h"

class UActionMap;
class Uaction_map_manager;

UCLASS(Blueprintable)
class UActionTaxiMap : public UActionObjectInputDeviceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    Uaction_map_manager* m_pManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActionMap* m_pMap;
    
public:
    UActionTaxiMap();

};


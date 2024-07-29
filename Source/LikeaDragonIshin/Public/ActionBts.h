#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionBts.generated.h"

class UAutoInputProxy;
class UAutoPadProxy;

UCLASS(Blueprintable)
class UActionBts : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAutoInputProxy* m_pAutoInputProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAutoPadProxy* m_pAutoPadProxy;
    
public:
    UActionBts();

};


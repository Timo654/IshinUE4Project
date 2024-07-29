#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AutoInputProxy.generated.h"

class UAutoPadProxy;

UCLASS(Blueprintable)
class UAutoInputProxy : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAutoPadProxy* m_pAutoPadProxy;
    
public:
    UAutoInputProxy();

};


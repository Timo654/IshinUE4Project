#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ccc.generated.h"

class UInputDeviceListener;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API Uccc : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_pPadListener;
    
public:
    Uccc();

};


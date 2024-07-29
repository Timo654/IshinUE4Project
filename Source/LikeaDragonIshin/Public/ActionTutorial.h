#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionTutorial.generated.h"

class UInputDeviceListener;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UActionTutorial : public UActionObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_plistener;
    
public:
    UActionTutorial();

};


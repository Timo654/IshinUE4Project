#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionArmsModelSprite.generated.h"

class ASceneCaptureArms;
class UInputDeviceListener;

UCLASS(Blueprintable)
class UActionArmsModelSprite : public UActionObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASceneCaptureArms* SceneCaptureArms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_listener;
    
    UActionArmsModelSprite();

};


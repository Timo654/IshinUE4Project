#pragma once
#include "CoreMinimal.h"
#include "ActionBase.h"
#include "ActionEventSkip.generated.h"

class UInputDeviceListener;
class UWorld;

UCLASS(Blueprintable)
class AActionEventSkip : public AActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_listener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* m_current_world;
    
public:
    AActionEventSkip(const FObjectInitializer& ObjectInitializer);

};


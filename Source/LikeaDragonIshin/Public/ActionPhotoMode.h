#pragma once
#include "CoreMinimal.h"
#include "ActionBase.h"
#include "ActionPhotoMode.generated.h"

class UInputDeviceListener;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API AActionPhotoMode : public AActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_listener;
    
public:
    AActionPhotoMode(const FObjectInitializer& ObjectInitializer);

};


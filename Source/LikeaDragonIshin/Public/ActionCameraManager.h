#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionCameraManager.generated.h"

class AActor;
class ADevil2CameraActorBase;

UCLASS(Blueprintable)
class UActionCameraManager : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, ADevil2CameraActorBase*> cameraMap;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, AActor*> srcCameraMap;
    
public:
    UActionCameraManager();

};


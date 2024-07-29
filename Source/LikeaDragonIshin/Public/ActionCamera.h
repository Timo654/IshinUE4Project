#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionCamera.generated.h"

class UDebugCameraListener;
class UInputDeviceListener;
class UMacanUIDataIconBase;

UCLASS(Blueprintable)
class UActionCamera : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* listener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugCameraListener* debugListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIDataIconBase* kinsiIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIDataIconBase* skipIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIDataIconBase* fpvIcon;
    
public:
    UActionCamera();

};


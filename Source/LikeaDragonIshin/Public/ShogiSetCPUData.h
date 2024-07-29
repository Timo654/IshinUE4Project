#pragma once
#include "CoreMinimal.h"
#include "ActionShogiBase.h"
#include "ShogiSetCPUData.generated.h"

class AShogiManager;
class UInputDeviceListener;
class UMacanUIDataShogi;
class UUIManager;

UCLASS(Blueprintable)
class AShogiSetCPUData : public AActionShogiBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AShogiManager* manager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* pListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIDataShogi* UIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIManager* pUIManager;
    
    AShogiSetCPUData(const FObjectInitializer& ObjectInitializer);

};


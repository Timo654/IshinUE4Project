#pragma once
#include "CoreMinimal.h"
#include "ActionShogiBase.h"
#include "ShogiController.generated.h"

class AShogiTaikyoku;
class UInputDeviceListener;
class UMacanUIDataShogi;
class UUIManager;

UCLASS(Blueprintable)
class AShogiController : public AActionShogiBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIDataShogi* UIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIManager* pUIManager;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* pListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AShogiTaikyoku* taikyoku;
    
public:
    AShogiController(const FObjectInitializer& ObjectInitializer);

};


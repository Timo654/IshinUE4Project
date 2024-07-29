#pragma once
#include "CoreMinimal.h"
#include "ActionShogiBase.h"
#include "ShogiDialog.generated.h"

class AShogiTaikyoku;
class UInputDeviceListener;
class UMacanUIDataShogi;
class UUIManager;

UCLASS(Blueprintable)
class AShogiDialog : public AActionShogiBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIDataShogi* UIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIManager* pUIManager;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AShogiTaikyoku* taikyoku;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* pListener;
    
public:
    AShogiDialog(const FObjectInitializer& ObjectInitializer);

};


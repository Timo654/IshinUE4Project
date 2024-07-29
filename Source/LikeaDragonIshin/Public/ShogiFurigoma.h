#pragma once
#include "CoreMinimal.h"
#include "ActionShogiBase.h"
#include "ShogiFurigoma.generated.h"

class AShogiManager;
class AShogiModelManager;
class UInputDeviceListener;
class UMacanUIDataShogi;
class UUIManager;

UCLASS(Blueprintable)
class AShogiFurigoma : public AActionShogiBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AShogiManager* manager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AShogiModelManager* ModelManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIManager* pUIManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* pListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIDataShogi* UIData;
    
    AShogiFurigoma(const FObjectInitializer& ObjectInitializer);

};


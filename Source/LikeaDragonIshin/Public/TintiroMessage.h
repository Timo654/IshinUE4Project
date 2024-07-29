#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TintiroMessage.generated.h"

class UActionMessage;
class UInputDeviceListener;
class UMacanUIDataTintiro;
class UUIManager;

UCLASS(Blueprintable)
class ATintiroMessage : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* pListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActionMessage* mp_messageWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIManager* pUIManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIDataTintiro* UIData;
    
public:
    ATintiroMessage(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUiData(UMacanUIDataTintiro* Data);
    
};


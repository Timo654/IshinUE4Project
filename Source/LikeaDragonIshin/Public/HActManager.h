#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "HActManager.generated.h"

class UInputDeviceListener;

UCLASS(Blueprintable)
class UHActManager : public UActionObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_plistener;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* listener;
    
public:
    UHActManager();

    UFUNCTION(BlueprintCallable)
    void CompletedUnloadStreamLevel();
    
};


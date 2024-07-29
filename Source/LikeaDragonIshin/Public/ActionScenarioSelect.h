#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionScenarioSelect.generated.h"

class UInputDeviceListener;

UCLASS(Blueprintable)
class UActionScenarioSelect : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* listener;
    
public:
    UActionScenarioSelect();

protected:
    UFUNCTION(BlueprintCallable)
    void PushDecide();
    
    UFUNCTION(BlueprintCallable)
    void PushCancel();
    
    UFUNCTION(BlueprintCallable)
    void ProfileClear();
    
    UFUNCTION(BlueprintCallable)
    void GotoMission();
    
    UFUNCTION(BlueprintCallable)
    void CursorMove(int32 dir);
    
    UFUNCTION(BlueprintCallable)
    void CategoryChange();
    
};


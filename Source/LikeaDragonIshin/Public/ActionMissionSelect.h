#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionMissionSelect.generated.h"

class UInputDeviceListener;

UCLASS(Blueprintable)
class UActionMissionSelect : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* listener;
    
public:
    UActionMissionSelect();

protected:
    UFUNCTION(BlueprintCallable)
    void PageChange(float wheel);
    
    UFUNCTION(BlueprintCallable)
    void GotoScenario();
    
    UFUNCTION(BlueprintCallable)
    void CursorMove(int32 dir);
    
    UFUNCTION(BlueprintCallable)
    void ChangeSeq();
    
    UFUNCTION(BlueprintCallable)
    void CategoryChange(float wheel);
    
};


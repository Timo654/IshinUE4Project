#pragma once
#include "CoreMinimal.h"
#include "ActionBase.h"
#include "ActionScenarioSelectBase.generated.h"

class UActionScenarioSelect;

UCLASS(Blueprintable)
class AActionScenarioSelectBase : public AActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActionScenarioSelect* Parent;
    
public:
    AActionScenarioSelectBase(const FObjectInitializer& ObjectInitializer);

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


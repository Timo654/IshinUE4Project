#pragma once
#include "CoreMinimal.h"
#include "ActionBase.h"
#include "ActionMissionSelectBase.generated.h"

class UActionMissionSelect;

UCLASS(Blueprintable)
class AActionMissionSelectBase : public AActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActionMissionSelect* Parent;
    
public:
    AActionMissionSelectBase(const FObjectInitializer& ObjectInitializer);

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


#pragma once
#include "CoreMinimal.h"
#include "ActionBase.h"
#include "RootAction.generated.h"

UCLASS(Blueprintable)
class ARootAction : public AActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActionBase* m_action_table[169];
    
public:
    ARootAction(const FObjectInitializer& ObjectInitializer);

};


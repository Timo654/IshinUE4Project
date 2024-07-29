#pragma once
#include "CoreMinimal.h"
#include "ActionSpawnerBase.h"
#include "eMACAN_ACT_ID.h"
#include "ActionSpawner.generated.h"

class AActionBase;

UCLASS(Blueprintable)
class AActionSpawner : public AActionSpawnerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    eMACAN_ACT_ID m_actionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActionBase* m_parent;
    
    AActionSpawner(const FObjectInitializer& ObjectInitializer);

};


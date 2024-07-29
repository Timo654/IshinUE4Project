#pragma once
#include "CoreMinimal.h"
#include "ActionSpawnerBase.h"
#include "eMACAN_ACT_OBJ_ID.h"
#include "ActionObjectSpawner.generated.h"

class UActionObjectBase;

UCLASS(Blueprintable)
class AActionObjectSpawner : public AActionSpawnerBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    eMACAN_ACT_OBJ_ID m_actionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActionObjectBase* m_parent;
    
    AActionObjectSpawner(const FObjectInitializer& ObjectInitializer);

};


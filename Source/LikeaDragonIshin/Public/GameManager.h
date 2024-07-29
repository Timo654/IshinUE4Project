#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Templates/SubclassOf.h"
#include "eMACAN_ACT_OBJ_ID.h"
#include "GameManager.generated.h"

class UActionObjectBase;
class URootActionObject;

UCLASS(Blueprintable)
class UGameManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URootActionObject* m_rootActionObject;
    
public:
    UGameManager();

    UFUNCTION()
    bool IsThereActionObject(eMACAN_ACT_OBJ_ID actionID, UActionObjectBase* Parent);
    
    UFUNCTION()
    UActionObjectBase* InsertActionObject(eMACAN_ACT_OBJ_ID actionID, UActionObjectBase* Parent);
    
    UFUNCTION()
    void GetActionObjectTypeCast(eMACAN_ACT_OBJ_ID actionID, UActionObjectBase* Parent, TSubclassOf<UActionObjectBase> ActionClass, UActionObjectBase*& outAction);
    
    UFUNCTION()
    UActionObjectBase* GetActionBaseObject(eMACAN_ACT_OBJ_ID actionID, UActionObjectBase* Parent);
    
};


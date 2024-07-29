#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "RootActionObject.generated.h"

UCLASS(Blueprintable)
class URootActionObject : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UActionObjectBase* m_action_object_table[226];
    
public:
    URootActionObject();

};


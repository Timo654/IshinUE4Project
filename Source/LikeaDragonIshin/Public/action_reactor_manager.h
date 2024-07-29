#pragma once
#include "CoreMinimal.h"
#include "entity_management_method.h"
#include "action_reactor_manager.generated.h"

class UObject;

UCLASS(Blueprintable)
class Uaction_reactor_manager : public Uentity_management_method {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, TSoftObjectPtr<UObject>> m_blueprint_objects;
    
public:
    Uaction_reactor_manager();

};


#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "action_map_manager.generated.h"

class AMiniMapManager;

UCLASS(Blueprintable)
class Uaction_map_manager : public UActionObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMiniMapManager* iconManager;
    
    Uaction_map_manager();

};


#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "action_activity_manager.generated.h"

class UMacanUserWidget_Activity;
class UMacanUserWidget_FriendlyGauge;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API Uaction_activity_manager : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_Activity* m_ui_activity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_FriendlyGauge* m_familiality_gauge;
    
public:
    Uaction_activity_manager();

};


#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionSoldierBattleManager.generated.h"

class UInputSoldierBattleListener;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UActionSoldierBattleManager : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInputSoldierBattleListener* m_pad;
    
public:
    UActionSoldierBattleManager();

};


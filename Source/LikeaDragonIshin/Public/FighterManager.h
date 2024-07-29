#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EBtlCtrlType.h"
#include "FighterData.h"
#include "FighterID.h"
#include "FighterManager.generated.h"

class AFighter;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UFighterManager : public UObject {
    GENERATED_BODY()
public:
    UFighterManager();

    UFUNCTION(BlueprintCallable)
    FFighterID RequestFighterForBP(const FFighterData& in_args);
    
    UFUNCTION(BlueprintCallable)
    bool NoAliveEnemyCheck();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFighter* GetActorPlayer() const;
    
    UFUNCTION(BlueprintCallable)
    void DeleteFighter(FFighterID in_id);
    
    UFUNCTION(BlueprintCallable)
    FFighterID DebugRequestFighter(EBtlCtrlType in_id);
    
};


#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EBtlCtrlType.h"
#include "FighterID.h"
#include "UtilBattle.generated.h"

class AFighter;
class UBattleManager;
class UBtlParamManager;
class UFighterManager;
class UObject;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UUtilBattle : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUtilBattle();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFighterManager* GetFighterManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UBtlParamManager* GetBtlParamManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UBattleManager* GetBattleManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AFighter* GetActorFighter(FFighterID in_id, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DebugRequestFighter(EBtlCtrlType in_id, const UObject* WorldContextObject);
    
};


#include "UtilBattle.h"

UUtilBattle::UUtilBattle() {
}

UFighterManager* UUtilBattle::GetFighterManager(const UObject* WorldContextObject) {
    return NULL;
}

UBtlParamManager* UUtilBattle::GetBtlParamManager(const UObject* WorldContextObject) {
    return NULL;
}

UBattleManager* UUtilBattle::GetBattleManager(const UObject* WorldContextObject) {
    return NULL;
}

AFighter* UUtilBattle::GetActorFighter(FFighterID in_id, const UObject* WorldContextObject) {
    return NULL;
}

void UUtilBattle::DebugRequestFighter(EBtlCtrlType in_id, const UObject* WorldContextObject) {
}



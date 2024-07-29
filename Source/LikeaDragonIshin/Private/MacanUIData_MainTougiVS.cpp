#include "MacanUIData_MainTougiVS.h"

UMacanUIData_MainTougiVS::UMacanUIData_MainTougiVS() {
    this->bfData = 0;
    this->IsFadeInMyName = false;
    this->IsFadeInOpponentName = false;
    this->IsFadeInBattleStart = false;
    this->IsFadeOutBattleStart = false;
    this->IsFadeInClear = false;
    this->IsFadeOutClear = false;
    this->BattleStartIndex = 0;
    this->StartIndex = 0;
}

void UMacanUIData_MainTougiVS::SetFlag(EUIMMMainTougVSBfType Type) {
}

void UMacanUIData_MainTougiVS::SetDisplayParam(int32 namePlayerIndex, int32 nameEnemyIndex, int32 btlStartIndex) {
}

bool UMacanUIData_MainTougiVS::IsOnFlag(EUIResultOnOrOff& result, EUIMMMainTougVSBfType Type) {
    return false;
}

bool UMacanUIData_MainTougiVS::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIData_MainTougiVS::DelFlag(EUIMMMainTougVSBfType Type) {
}



#include "MahjongUserInfo.h"

FMahjongUserInfo::FMahjongUserInfo() {
    this->Point = 0;
    this->FaceIconIndex = 0;
    this->KazeType = EUIMahjongKazeType::Ton;
    this->ranking = 0;
    this->CalcPoint = 0;
    this->IsMyTurn = false;
}


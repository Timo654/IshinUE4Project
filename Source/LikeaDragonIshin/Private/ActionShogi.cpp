#include "ActionShogi.h"

AActionShogi::AActionShogi(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AActionShogi::TouchTableCallBack(int32 X, int32 Y) {
}

void AActionShogi::MouseOverTableCallBack(int32 X, int32 Y) {
}

AShogiManager* AActionShogi::GetShogiManager() {
    return NULL;
}



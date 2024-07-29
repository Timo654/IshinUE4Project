#include "ActionKoikoiActor.h"

AActionKoikoiActor::AActionKoikoiActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->isFirstPlay = false;
    this->blurEffect = NULL;
}

void AActionKoikoiActor::UpdateBlueEffect(float DeltaTime) {
}

void AActionKoikoiActor::UnBindMouseActionCallBack() {
}

void AActionKoikoiActor::StartRuleExplanation() {
}

void AActionKoikoiActor::SetResultSaveData(int32 playerPoint, int32 rivalPoint, ERivalLevel rivalLv, int32 dwBet) {
}

void AActionKoikoiActor::PrintOperationExplanation() {
}

void AActionKoikoiActor::PlayKoikoiBGM() {
}

void AActionKoikoiActor::PlayBlurEffect() {
}













bool AActionKoikoiActor::IsSequenceChange() {
    return false;
}

int32 AActionKoikoiActor::GetPlayerTen() {
    return 0;
}

void AActionKoikoiActor::FinishGameUpdate() {
}

void AActionKoikoiActor::FinishGame() {
}

bool AActionKoikoiActor::ChkPause() {
    return false;
}

bool AActionKoikoiActor::CheckHasan() {
    return false;
}

void AActionKoikoiActor::BindMouseActionCallBackSankaku() {
}

void AActionKoikoiActor::BindMouseActionCallBackSakazukiChoice() {
}

void AActionKoikoiActor::BindMouseActionCallBackKoikoiChoice() {
}

void AActionKoikoiActor::BindMouseActionCallBackFirstMenu() {
}

void AActionKoikoiActor::BindMouseActionCallBackContinueChoice() {
}

void AActionKoikoiActor::BGMStop() {
}

void AActionKoikoiActor::BGMReset() {
}

void AActionKoikoiActor::AttributeExplanation() {
}



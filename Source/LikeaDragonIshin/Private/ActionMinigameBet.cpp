#include "ActionMinigameBet.h"

AActionMinigameBet::AActionMinigameBet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->pListener = NULL;
}

void AActionMinigameBet::ZeroOK() {
}

void AActionMinigameBet::ShowWindow() {
}

void AActionMinigameBet::SetRealTimeBet() {
}

void AActionMinigameBet::SetPreBet(int32 preBet) {
}

void AActionMinigameBet::SetPlayDecideSE(bool IsPlay) {
}

void AActionMinigameBet::SetPadListener(UInputDeviceListener* pLis) {
}

void AActionMinigameBet::SetMoneyType(TEnumAsByte<eMONEYTYPE> moneyType) {
}

void AActionMinigameBet::SetFundsName(const FString& C) {
}

void AActionMinigameBet::SetFix(int32 bet) {
}

void AActionMinigameBet::SetDrawAddFlag() {
}

void AActionMinigameBet::SetDividendText(FText text) {
}

void AActionMinigameBet::SetDecideAnimSec(float sec) {
}

void AActionMinigameBet::SetCseFlag() {
}

void AActionMinigameBet::SetBetName(const FString& C) {
}

void AActionMinigameBet::SetBetMin(int32 betMin) {
}

void AActionMinigameBet::SetBetMax(int32 betMax) {
}

void AActionMinigameBet::SetAddKeta(uint32 addKeta) {
}

void AActionMinigameBet::SetAddFundsFlag() {
}

void AActionMinigameBet::RestoreWindow() {
}

void AActionMinigameBet::RequestWindowForTutorial(EBetWindowType Type, int32 funds, int32 kakeMax, int32 defaultBet, bool cancel) {
}

void AActionMinigameBet::RequestWindow(EBetWindowType Type, int32 kakeMax, TEnumAsByte<eMONEYTYPE> motiType, int32 defaultBet, bool cancel) {
}

void AActionMinigameBet::OpenWindowCallBack() {
}

bool AActionMinigameBet::IsRequest() {
    return false;
}

bool AActionMinigameBet::IsLoadFinish() {
    return false;
}

bool AActionMinigameBet::IsFix() {
    return false;
}

bool AActionMinigameBet::IsDrawCse() {
    return false;
}

bool AActionMinigameBet::IsDecideAnim() {
    return false;
}

bool AActionMinigameBet::IsBetFinish() {
    return false;
}

bool AActionMinigameBet::IsAddFunds() {
    return false;
}

void AActionMinigameBet::IgnoreInputOnce() {
}

void AActionMinigameBet::HideWindow() {
}

int32 AActionMinigameBet::GetFunds() {
    return 0;
}

int32 AActionMinigameBet::GetBet() {
    return 0;
}

void AActionMinigameBet::ForceDecide() {
}

void AActionMinigameBet::ExecAfterCamera() {
}

void AActionMinigameBet::DeleteWindow(bool isPlaySound) {
}

void AActionMinigameBet::DeleteAction() {
}

void AActionMinigameBet::DecideAnimationFinCallBack() {
}

void AActionMinigameBet::ClrFix() {
}

void AActionMinigameBet::ClrDrawAdFlag() {
}

void AActionMinigameBet::ClrCseFlag() {
}

void AActionMinigameBet::ClrAddFundsFlag() {
}

void AActionMinigameBet::CloseWindowCallBack() {
}

bool AActionMinigameBet::CanPlayDecideSE() {
    return false;
}

void AActionMinigameBet::CancelOK() {
}



#include "KoikoiCard.h"

AKoikoiCard::AKoikoiCard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CardRank = EHanafudaCardRank::HCR_Kasu;
    this->CardMonth = 0;
    this->isMoving = false;
    this->moveEaseValue = 0.00f;
    this->moveSpeed = 0.00f;
    this->moveDelayTime = 0.00f;
    this->isRotate = false;
    this->afterStopTime = 0.00f;
    this->isSizeChange = false;
    this->isAfterUIDisp = false;
    this->isDispUIIndex = 0;
    this->isOpening = false;
    this->openDelayTime = 0.00f;
    this->isOpenAfterMove = false;
    this->openSpeed = 0.00f;
    this->isMoveAfterOpen = false;
    this->cardDepth = 0.00f;
    this->CardKind = EHanafudaCardKind::HCK_Ayame_Kasu1;
    this->isKabuCard = false;
    this->defMoveSpeed = 0.00f;
    this->isFloat = false;
}

void AKoikoiCard::PlayOpenSE() {
}

void AKoikoiCard::PlayMoveSE() {
}

void AKoikoiCard::OpenCardAfterMoveAndRotation(float openDelay, float inOpenSpeed, bool floating, const FVector& purpose, FRotator purposeRotate, float moveDelay, float Speed, float afterStop) {
}

void AKoikoiCard::OpenCardAfterDispUI(float Delay, float Speed, bool floating, int32 uiIndex) {
}

void AKoikoiCard::OpenCard(float Delay, float Speed, bool floating, bool isSoundNotPlay) {
}

void AKoikoiCard::MoveAfterOpenCardAndRotationAfterDispUI(float openDelay, float inOpenSpeed, bool floating, const FVector& purpose, FRotator purposeRotate, float moveDelay, float Speed, float afterStop, int32 uiIndex) {
}

void AKoikoiCard::MoveAfterOpenCardAndRotation(float openDelay, float inOpenSpeed, bool floating, const FVector& purpose, FRotator purposeRotate, float moveDelay, float Speed, float afterStop) {
}

bool AKoikoiCard::IsMove() const {
    return false;
}

bool AKoikoiCard::CheckCardMatch(AKoikoiCard* card) {
    return false;
}

void AKoikoiCard::ChangePixelDepth(float Value) {
}

void AKoikoiCard::ChangeOichokabuSE() {
}

void AKoikoiCard::CardRelativeMove(const FVector& purpose, float DelayTime, float Speed, float afterStop, bool floating) {
}

void AKoikoiCard::CardMoveAndRotateAfterDispUI(const FVector& purpose, FRotator purposeRotate, float DelayTime, float Speed, float afterStop, bool floating, int32 uiIndex) {
}

void AKoikoiCard::CardMoveAndRotate(const FVector& purpose, FRotator purposeRotate, float DelayTime, float Speed, float afterStop, bool floating) {
}

void AKoikoiCard::CardMove(const FVector& purpose, float DelayTime, float Speed, float afterStop, bool floating) {
}



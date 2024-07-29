#include "ChohanManager.h"

AChohanManager::AChohanManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsGameFinishFlg = false;
    this->listener = NULL;
}

bool AChohanManager::Timer(float nowTimer, float lastTimer, float Time) {
    return false;
}

void AChohanManager::SetWinFlag(bool flag) {
}

void AChohanManager::SetLoseFlag(bool flag) {
}

void AChohanManager::SetFavorablity(int32 favo) {
}

bool AChohanManager::ScenarioSetFlag(EChohanScenarioFlagType Type, bool flag) {
    return false;
}

bool AChohanManager::ScenarioCmpFlag(EChohanScenarioFlagType Type, bool flag) {
    return false;
}

void AChohanManager::OperationPauseOn() {
}

bool AChohanManager::LoadSESound() {
    return false;
}

bool AChohanManager::IsPADV() {
    return false;
}

bool AChohanManager::IsNajimiGame() {
    return false;
}

bool AChohanManager::IsLoadFinishSound() {
    return false;
}

bool AChohanManager::IsDebugWin() {
    return false;
}

bool AChohanManager::IsDebugIkasama() {
    return false;
}

FVector AChohanManager::GetTuboFuriPos() {
    return FVector{};
}

FVector AChohanManager::GetTuboFuriOfs() {
    return FVector{};
}

float AChohanManager::GetTuboFuriHOffset() {
    return 0.0f;
}

float AChohanManager::GetTuboFuriH() {
    return 0.0f;
}

FVector AChohanManager::GetTuboFuriBase() {
    return FVector{};
}

FVector AChohanManager::GetSetJarPos() {
    return FVector{};
}

FVector AChohanManager::GetSetJarCamPos() {
    return FVector{};
}

float AChohanManager::GetPSideLen() {
    return 0.0f;
}

int32 AChohanManager::GetPlayNum() {
    return 0;
}

FVector AChohanManager::GetNPCPos(int32 Index) {
    return FVector{};
}

int32 AChohanManager::GetMoney() {
    return 0;
}

FVector AChohanManager::GetMihariPos() {
    return FVector{};
}

FVector AChohanManager::GetKiryuPos() {
    return FVector{};
}

FVector AChohanManager::GetHarukaPos() {
    return FVector{};
}

int32 AChohanManager::GetGameNum() {
    return 0;
}

float AChohanManager::GetFrontLen() {
    return 0.0f;
}

FVector AChohanManager::GetFieldCenter() {
    return FVector{};
}

int32 AChohanManager::GetFavorability() {
    return 0;
}

FVector AChohanManager::GetDiceCenterPos() {
    return FVector{};
}

int32 AChohanManager::GetChohanAddMoney() {
    return 0;
}

FVector AChohanManager::GetBakutoPos() {
    return FVector{};
}

void AChohanManager::FinishGame() {
}

void AChohanManager::FadeSet(float Time, float Alpha) {
}

void AChohanManager::EnablePause() {
}

void AChohanManager::DisablePause() {
}

void AChohanManager::ChangeBGM(bool isDefault) {
}

EChohanButtonState AChohanManager::ButtonExec(float startTimer, float stayTimer, float nowTimer, float lastTimer, EChohanButtonType button_type, UInputDeviceListener* pPad) {
    return EChohanButtonState::BUTTON_NORMAL;
}

void AChohanManager::AddWinPoint(int32 NewAddMoney) {
}

void AChohanManager::AddTokuPoint() {
}

void AChohanManager::AddPlayNum(int32 Add) {
}

void AChohanManager::AddMoneyOne(int32 Add) {
}

void AChohanManager::AddMoney(int32 Add, int32 add2) {
}

void AChohanManager::AddGameNum() {
}



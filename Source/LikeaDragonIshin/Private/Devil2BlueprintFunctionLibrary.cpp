#include "Devil2BlueprintFunctionLibrary.h"

UDevil2BlueprintFunctionLibrary::UDevil2BlueprintFunctionLibrary() {
}

void UDevil2BlueprintFunctionLibrary::SwitchGameCamera() {
}

void UDevil2BlueprintFunctionLibrary::SwitchCCameraDummy(bool sw, bool immediate) {
}

void UDevil2BlueprintFunctionLibrary::ShowLoadingScreen() {
}

void UDevil2BlueprintFunctionLibrary::SetNearClipPlane(float NewClipPlane) {
}

void UDevil2BlueprintFunctionLibrary::SetFictionLogoStep(int32 st) {
}

void UDevil2BlueprintFunctionLibrary::SetBits(int32& flag, int32 Mask) {
}

void UDevil2BlueprintFunctionLibrary::SetBit(int32& flag, int32 bit) {
}

bool UDevil2BlueprintFunctionLibrary::SequenceManagerIsActive() {
    return false;
}

FName UDevil2BlueprintFunctionLibrary::SequenceManagerGetID() {
    return NAME_None;
}

void UDevil2BlueprintFunctionLibrary::RumbleStop(const FString& ID) {
}

void UDevil2BlueprintFunctionLibrary::RumblePlayJoint(const FString& ID, const FString& id_joint) {
}

void UDevil2BlueprintFunctionLibrary::RumblePlay(const FString& ID, TEnumAsByte<RumblePriority> Priority) {
}

float UDevil2BlueprintFunctionLibrary::ReviseEaseAlpha(float Alpha) {
    return 0.0f;
}

bool UDevil2BlueprintFunctionLibrary::ReqFictionLogo() {
    return false;
}

EPadButton UDevil2BlueprintFunctionLibrary::PadDecideButton() {
    return EPadButton::CROSS;
}

EPadButton UDevil2BlueprintFunctionLibrary::PadCancelButton() {
    return EPadButton::CROSS;
}

bool UDevil2BlueprintFunctionLibrary::IsFictionLogoFinish() {
    return false;
}

UAppPad* UDevil2BlueprintFunctionLibrary::InputDeviceManagerGetPad() {
    return NULL;
}

void UDevil2BlueprintFunctionLibrary::InputDeviceManagerDisconnect(UInputDeviceListener* listener) {
}

void UDevil2BlueprintFunctionLibrary::InputDeviceManagerConnect(int32 DeviceID, UInputDeviceListener* listener, EInputDeviceListenerPri Priority, EKeyconfigSceneID Scene) {
}

float UDevil2BlueprintFunctionLibrary::GetNearClipPlane() {
    return 0.0f;
}

EPadButton UDevil2BlueprintFunctionLibrary::GetKeyconfigPadKey(EKeyconfigSceneID Scene, EPadButton Key) {
    return EPadButton::CROSS;
}

TArray<FKey> UDevil2BlueprintFunctionLibrary::GetKeyconfigFKeys(EKeyconfigSceneID Scene, EPadButton Key) {
    return TArray<FKey>();
}

FKey UDevil2BlueprintFunctionLibrary::GetKeyconfigFKey(EKeyconfigSceneID Scene, EPadButton Key) {
    return FKey{};
}

int32 UDevil2BlueprintFunctionLibrary::GetDaytime() {
    return 0;
}

void UDevil2BlueprintFunctionLibrary::FukubikiInsertAction() {
}

int32 UDevil2BlueprintFunctionLibrary::FukubikiGetPrizeWinCounts(TArray<int32>& counts) {
    return 0;
}

UObject* UDevil2BlueprintFunctionLibrary::FukubikiGetAction() {
    return NULL;
}

void UDevil2BlueprintFunctionLibrary::ClearBits(int32& flag, int32 Mask) {
}

void UDevil2BlueprintFunctionLibrary::ClearBit(int32& flag, int32 bit) {
}

int32 UDevil2BlueprintFunctionLibrary::CheckFictionLogoStep() {
    return 0;
}

bool UDevil2BlueprintFunctionLibrary::CheckBootLogoFinish(bool fin) {
    return false;
}

bool UDevil2BlueprintFunctionLibrary::CheckBootLogoAllow() {
    return false;
}

bool UDevil2BlueprintFunctionLibrary::CheckBitsAll(int32 flag, int32 Mask) {
    return false;
}

bool UDevil2BlueprintFunctionLibrary::CheckBits(int32 flag, int32 Mask) {
    return false;
}

bool UDevil2BlueprintFunctionLibrary::CheckBit(int32 flag, int32 bit) {
    return false;
}

void UDevil2BlueprintFunctionLibrary::CCC_NoticePageEnd() {
}

float UDevil2BlueprintFunctionLibrary::CalcHorizontalFovRad(float rad) {
    return 0.0f;
}

float UDevil2BlueprintFunctionLibrary::CalcHorizontalFov(float deg) {
    return 0.0f;
}

int32 UDevil2BlueprintFunctionLibrary::BitToMask32(int32 bit) {
    return 0;
}

void UDevil2BlueprintFunctionLibrary::AllowBootLogo(bool sw) {
}



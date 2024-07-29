#include "AnimInstancePostProcess.h"

UAnimInstancePostProcess::UAnimInstancePostProcess() {
    this->FaceTarget = NULL;
    this->WrinkleOffsetWeight = 1.00f;
    this->HandPattern = NULL;
    this->FaceLook = NULL;
    this->Jaunt = NULL;
    this->LimbSolver = NULL;
    this->WaistTwist = NULL;
    this->KawaiiPhysicsParam = NULL;
    this->ClothTeleportDistanceAnim = 150.00f;
    this->ClothTeleportRotationAnim = 10.00f;
    this->bClothForceTeleportAnim = false;
    this->bClothDisableAnim = false;
    this->bClothHakamaLDisableAnim = false;
    this->bClothHakamaRDisableAnim = false;
    this->ClothHakamaLBlendAnim = 1.00f;
    this->ClothHakamaRBlendAnim = 1.00f;
    this->bClothSodeLDisableAnim = false;
    this->bClothSodeRDisableAnim = false;
    this->ClothSodeLBlendAnim = 1.00f;
    this->ClothSodeRBlendAnim = 1.00f;
    this->ClothSodeLimitAngleScale = 1.00f;
    this->bClothSusoDisableAnim = false;
    this->ClothSusoBlendAnim = 1.00f;
    this->ClothBlendType = EAnimAlphaInputType::Curve;
    this->ClothForceExecCount = 0;
    this->bDisableSayaCollision = false;
    this->SkeletalMesh = NULL;
    this->FaceMaterial = NULL;
    this->EyeMaterial = NULL;
}

void UAnimInstancePostProcess::SetWrinkleOffsetWeight(float Weight) {
}

void UAnimInstancePostProcess::SetWaistTwist(UWaistTwist* waist) {
}

void UAnimInstancePostProcess::SetLimbSolver(ULimbSolver* NewLimbSolver) {
}

void UAnimInstancePostProcess::SetKawaiiPhysicsParam(UKawaiiPhysicsParam* Param) {
}

void UAnimInstancePostProcess::SetJaunt(UJaunt* NewJaunt) {
}

void UAnimInstancePostProcess::SetHandPatternLockBlend(float Blend) {
}

void UAnimInstancePostProcess::SetHandPatternBlend(float Blend) {
}

void UAnimInstancePostProcess::SetHandPattern(UHandPattern* Pattern) {
}

void UAnimInstancePostProcess::SetFaceTarget(UFaceTarget* Target) {
}

void UAnimInstancePostProcess::SetFaceLook(UFaceLook* Look) {
}

void UAnimInstancePostProcess::SetFaceBlend(float Blend) {
}

void UAnimInstancePostProcess::SetDisableSayaCollision(bool disable) {
}

void UAnimInstancePostProcess::SetClothTeleportRotation(float Rotation) {
}

void UAnimInstancePostProcess::SetClothTeleportDistance(float Distance) {
}

void UAnimInstancePostProcess::SetClothSusoDisable(bool is_disable) {
}

void UAnimInstancePostProcess::SetClothSusoBlend(float Blend) {
}

void UAnimInstancePostProcess::SetClothSodeRBlend(float Blend) {
}

void UAnimInstancePostProcess::SetClothSodeLimitAngleScale(float Scale) {
}

void UAnimInstancePostProcess::SetClothSodeLBlend(float Blend) {
}

void UAnimInstancePostProcess::SetClothSodeDisable(bool is_disable) {
}

void UAnimInstancePostProcess::SetClothSodeBlend(float Blend) {
}

void UAnimInstancePostProcess::SetClothHakamaRBlend(float Blend) {
}

void UAnimInstancePostProcess::SetClothHakamaLBlend(float Blend) {
}

void UAnimInstancePostProcess::SetClothHakamaDisable(bool is_disable) {
}

void UAnimInstancePostProcess::SetClothHakamaBlend(float Blend) {
}

void UAnimInstancePostProcess::SetClothForceTeleport(bool is_teleport) {
}

void UAnimInstancePostProcess::SetClothForceExecCount(int32 Count) {
}

void UAnimInstancePostProcess::SetClothDisable(bool is_disable) {
}

void UAnimInstancePostProcess::SetClothBlendType(EAnimAlphaInputType Type) {
}

void UAnimInstancePostProcess::SetClothBlend(float Blend) {
}

ULimbSolver* UAnimInstancePostProcess::GetLimbSolver() const {
    return NULL;
}

UKawaiiPhysicsParam* UAnimInstancePostProcess::GetKawaiiPhysicsParam() const {
    return NULL;
}

UJaunt* UAnimInstancePostProcess::GetJaunt() const {
    return NULL;
}

float UAnimInstancePostProcess::GetHandPatternLockBlend() {
    return 0.0f;
}

float UAnimInstancePostProcess::GetHandPatternBlend() {
    return 0.0f;
}

UHandPattern* UAnimInstancePostProcess::GetHandPattern() const {
    return NULL;
}

UFaceTarget* UAnimInstancePostProcess::GetFaceTarget() const {
    return NULL;
}

UFaceLook* UAnimInstancePostProcess::GetFaceLook() const {
    return NULL;
}

float UAnimInstancePostProcess::GetFaceBlend() {
    return 0.0f;
}

float UAnimInstancePostProcess::GetClothSusoBlend() {
    return 0.0f;
}

float UAnimInstancePostProcess::GetClothSodeRBlend() {
    return 0.0f;
}

float UAnimInstancePostProcess::GetClothSodeLBlend() {
    return 0.0f;
}

float UAnimInstancePostProcess::GetClothHakamaRBlend() {
    return 0.0f;
}

float UAnimInstancePostProcess::GetClothHakamaLBlend() {
    return 0.0f;
}

EAnimAlphaInputType UAnimInstancePostProcess::GetClothBlendType() {
    return EAnimAlphaInputType::Float;
}

float UAnimInstancePostProcess::GetClothBlend() {
    return 0.0f;
}



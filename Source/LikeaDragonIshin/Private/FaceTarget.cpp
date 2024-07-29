#include "FaceTarget.h"

UFaceTarget::UFaceTarget() {
    this->FacePatternType = EFacePatternType::invalid;
    this->OverWriteFaceTarget = false;
    this->UsingMotionFaceTarget = false;
    this->UsingMotionFaceTargetAddParam = false;
    this->MotionFaceTargetToParamWeight = 0.00f;
    this->IgnoreFaceTargetWeight = false;
    this->IgnoreFacePatternWeight = false;
    this->UseAutoWrinkle = true;
    this->UseBlink = false;
    this->DramaScannerTime = 0.00f;
    this->DramaScannerFadeInTime = 0.00f;
    this->Skeleton = NULL;
    this->FaceTargetAnimations.AddDefaulted(95);
    this->FacePatternAnimations.AddDefaulted(42);
    this->FaceBlend = 1.00f;
    this->ParentAnimInstance = NULL;
}

void UFaceTarget::UnLoadDramaScanner(const FName& Name) {
}

void UFaceTarget::StopDramaScanner() {
}

void UFaceTarget::SetFaceTargetWeightAdd(EFaceTargetType Type, float Weight) {
}

void UFaceTarget::SetFaceTargetWeight(EFaceTargetType Type, float Weight) {
}

void UFaceTarget::SetFacePatternWeightAdd(EFacePatternType Type, float Weight) {
}

void UFaceTarget::SetFacePatternWeight(EFacePatternType Type, float Weight) {
}

void UFaceTarget::SetFacePattern(EFacePatternType Type, bool is_reset) {
}

void UFaceTarget::SetDramaScannerTime(float Time, float fade_in_time) {
}

void UFaceTarget::PlayDramaScanner(const FName& Name) {
}

void UFaceTarget::LoadDramaScanner(const FName& Name) {
}

bool UFaceTarget::IsLoadedDramaScanner(const FName& Name) {
    return false;
}

void UFaceTarget::EnableEyeClose(bool Enable) {
}

void UFaceTarget::EnableEyeBlink(bool Enable) {
}

void UFaceTarget::EnableEasyTalk(bool Enable) {
}



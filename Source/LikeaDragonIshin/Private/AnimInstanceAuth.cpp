#include "AnimInstanceAuth.h"

UAnimInstanceAuth::UAnimInstanceAuth() {
    this->FaceTarget = NULL;
    this->HandPattern = NULL;
    this->TargetAllWeight = 1.00f;
    this->TargetAllWeightAdd = 1.00f;
    this->PatternAllWeight = 1.00f;
    this->OverWriteFaceTarget = false;
    this->UsingMotionFaceTarget = false;
    this->UsingMotionFaceTargetAddParam = false;
    this->MotionFaceTargetToParamWeight = 0.00f;
    this->UseAutoWrinkle = false;
    this->WrinkleOffsetWeight = 1.00f;
    this->DebugWrinkleParam = false;
    this->DisableHandPattern = false;
    this->SkeletalMeshComponent = NULL;
    this->SkeletalMesh = NULL;
    this->FaceMaterial = NULL;
    this->EyeMaterial = NULL;
}

UHandPattern* UAnimInstanceAuth::GetHandPattern() const {
    return NULL;
}

UFaceTarget* UAnimInstanceAuth::GetFaceTarget() const {
    return NULL;
}



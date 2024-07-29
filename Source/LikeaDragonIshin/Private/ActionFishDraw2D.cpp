#include "ActionFishDraw2D.h"
#include "Templates/SubclassOf.h"

AActionFishDraw2D::AActionFishDraw2D(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_listener = NULL;
    this->m_skeletal_mesh = NULL;
    this->m_anim_ins = NULL;
}


float AActionFishDraw2D::GetRotValueYaw() {
    return 0.0f;
}

float AActionFishDraw2D::GetRotValuePitch() {
    return 0.0f;
}

float AActionFishDraw2D::GetFishScale() {
    return 0.0f;
}

FVector AActionFishDraw2D::GetFishOffsetTrans() {
    return FVector{};
}

FRotator AActionFishDraw2D::GetFishOffsetRot() {
    return FRotator{};
}

USkeletalMesh* AActionFishDraw2D::GetFishMesh() {
    return NULL;
}

TSubclassOf<UAnimInstance> AActionFishDraw2D::GetFishAnim() {
    return NULL;
}




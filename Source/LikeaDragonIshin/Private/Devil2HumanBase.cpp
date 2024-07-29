#include "Devil2HumanBase.h"
#include "Components/SkeletalMeshComponent.h"
#include "HumanSoundComponent.h"
#include "MacanCharacterMovementComponent.h"

ADevil2HumanBase::ADevil2HumanBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UMacanCharacterMovementComponent>(TEXT("CharMoveComp")).SetDefaultSubobjectClass<USkeletalMeshComponent>(TEXT("CharacterMesh0"))) {
    this->bEnableHeight = true;
    this->SoundComponent = CreateDefaultSubobject<UHumanSoundComponent>(TEXT("HumanSoundComponent"));
    this->bVisibleShoesReq = true;
    this->TextureSkin = NULL;
    this->TextureNeck = NULL;
    //this->MeshFace->SetupAttachment(RootComponent);
}

void ADevil2HumanBase::SetVisibleShoes(bool bVisible) {
}

void ADevil2HumanBase::SetVisibleModel(bool bVisible) {
}

void ADevil2HumanBase::SetParamater(const FName AliasName) {
}

void ADevil2HumanBase::SetHeightParam(int32 _Height) {
}

void ADevil2HumanBase::SetDLCKiryuSaya(bool bEnable) {
}

void ADevil2HumanBase::SetAnimation(UClass* NewClass) {
}

void ADevil2HumanBase::ResetScale() {
}

bool ADevil2HumanBase::HasLoadCompleted() const {
    return false;
}

UPoseableMeshComponent* ADevil2HumanBase::GetHeadMesh() {
    return NULL;
}

UPoseableMeshComponent* ADevil2HumanBase::GetHairMesh() {
    return NULL;
}

USkeletalMeshComponent* ADevil2HumanBase::GetBodyMesh() {
    return NULL;
}



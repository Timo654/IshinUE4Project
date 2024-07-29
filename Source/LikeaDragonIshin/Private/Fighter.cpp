#include "Fighter.h"
#include "EffectParticleGroundComponent.h"

AFighter::AFighter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CharacterState_ = ECharacterState::Stand;
    this->ParticleGround_ = CreateDefaultSubobject<UEffectParticleGroundComponent>(TEXT("ParticleGround"));
    this->SpringArmComponent_ = NULL;
    this->CtrlTypeForDirectPut_ = EBtlCtrlType::Num;
    this->FighterKindForDirectPut_ = EBtlFighterKind::Unknown;
    this->TempDowning_ = false;
    this->AudioPlayer_ = NULL;
}

void AFighter::UsingEffectTrack(const USkeletalMeshComponent* InBase, bool is_visible) {
}


FRotator AFighter::GetViewRotator_Implementation() const {
    return FRotator{};
}

FText AFighter::GetCharaName() const {
    return FText::GetEmpty();
}



#include "ReactorObject.h"

AReactorObject::AReactorObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PoseableMesh = NULL;
}

void AReactorObject::ShootBullet_Implementation() {
}

void AReactorObject::SetSimulatePhysics_Implementation(bool in_Simulate) {
}

void AReactorObject::SetEnableAttackCollision_Implementation(bool in_EnableAttackCollision) {
}

void AReactorObject::SetEffectVisibility_Implementation(bool in_Visible) {
}

void AReactorObject::OnComponentHit_Implementation(UPrimitiveComponent* PrimComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}



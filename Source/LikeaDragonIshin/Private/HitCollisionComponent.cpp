#include "HitCollisionComponent.h"
#include "NavAreas/NavArea_Obstacle.h"

UHitCollisionComponent::UHitCollisionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AreaClass = UNavArea_Obstacle::StaticClass();
    this->CollisionPartsType = ECollisionPartsType::NUM;
    this->IsWeakPoint = false;
    this->IsNoAttack = false;
    this->IsNoDamage = false;
    this->ActiveAttackCount = 0;
    this->OwnerFighter = NULL;
    this->IsFirstAttack = false;
}

void UHitCollisionComponent::ResetAttack() {
}

void UHitCollisionComponent::EndAttack() {
}

void UHitCollisionComponent::BeginAttack() {
}

bool UHitCollisionComponent::AttackCollisionTraceMulti(const UObject* WorldContextObject, TEnumAsByte<ETraceTypeQuery> TraceChannel, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}



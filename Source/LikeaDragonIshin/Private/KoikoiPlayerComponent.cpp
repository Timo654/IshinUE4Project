#include "KoikoiPlayerComponent.h"

UKoikoiPlayerComponent::UKoikoiPlayerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PutOutHandStopTime = 0.30f;
    this->OpenAfterStopTime = 0.50f;
    this->RivalThinkingTime = 0.80f;
    this->isKoikoi = false;
}

void UKoikoiPlayerComponent::UpdateSyunMask(int32 Month) {
}

void UKoikoiPlayerComponent::SetGetCardPosZ(float Z) {
}

void UKoikoiPlayerComponent::ResetMonth() {
}

void UKoikoiPlayerComponent::PutOutHandMove(AKoikoiCard* putCard, const FVector& purposePos, const FRotator& purposeRot, float DelayTime, float stoptime, bool IsOpen, float openSpeed, float Speed) {
}

void UKoikoiPlayerComponent::PutOutHand(AKoikoiCard* putCard) {
}

AKoikoiCard* UKoikoiPlayerComponent::OpenAllHand() {
    return NULL;
}

FKoikoiGuideMessage UKoikoiPlayerComponent::GetGuideMessageData(UKoikoiPlayerComponent* rival, const TArray<AKoikoiCard*>& Field, bool isPlayer) const {
    return FKoikoiGuideMessage{};
}

FString UKoikoiPlayerComponent::GetGuideMessage(UKoikoiPlayerComponent* rival, const TArray<AKoikoiCard*>& Field, bool isPlayer) const {
    return TEXT("");
}

void UKoikoiPlayerComponent::GetCardUiData(const TArray<AKoikoiCard*>& getCards, TArray<int32>& Num, TArray<FVector>& Poses) {
}

void UKoikoiPlayerComponent::GetCardData(const TArray<AKoikoiCard*>& getCards) {
}

void UKoikoiPlayerComponent::GetCardAnimation(const TArray<AKoikoiCard*>& getCards) {
}

void UKoikoiPlayerComponent::GetCard(const TArray<AKoikoiCard*>& getCards) {
}

TArray<EHanafudaAttribute> UKoikoiPlayerComponent::GetAttributeEnums(const TArray<FKoikoiAttribute>& attributeList, int32& Point) const {
    return TArray<EHanafudaAttribute>();
}

TArray<EHanafudaYakuState> UKoikoiPlayerComponent::CreateListRevalNotYetAttribute(TArray<EHanafudaYakuState> stateList, bool useHanami, bool useShun) {
    return TArray<EHanafudaYakuState>();
}

TArray<EHanafudaYakuState> UKoikoiPlayerComponent::CreateListAchieveAttribute(TArray<EHanafudaYakuState> stateList) {
    return TArray<EHanafudaYakuState>();
}

bool UKoikoiPlayerComponent::CheckTeshi() {
    return false;
}

bool UKoikoiPlayerComponent::CheckSakazukiKasuChange() {
    return false;
}

TArray<FKoikoiAttribute> UKoikoiPlayerComponent::CheckNewAttribute(const TArray<FKoikoiAttribute>& attributeList) {
    return TArray<FKoikoiAttribute>();
}

bool UKoikoiPlayerComponent::CheckKuttuki() {
    return false;
}

TArray<FKoikoiAttribute> UKoikoiPlayerComponent::CheckAttribute(bool useHanami, bool useShun) {
    return TArray<FKoikoiAttribute>();
}

void UKoikoiPlayerComponent::ChangeSakazukiKasu() {
}



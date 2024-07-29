#include "KoikoiField.h"

AKoikoiField::AKoikoiField(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->firstDistCardSpeed = 0.00f;
    this->threeMatchAfterStopTime = 0.50f;
}

TArray<EHanafudaCardKind> AKoikoiField::ShuffleDeckDebug(int32 Num) {
    return TArray<EHanafudaCardKind>();
}

TArray<EHanafudaCardKind> AKoikoiField::ShuffleDeckChoiceParent() {
    return TArray<EHanafudaCardKind>();
}

TArray<EHanafudaCardKind> AKoikoiField::ShuffleDeck() {
    return TArray<EHanafudaCardKind>();
}

void AKoikoiField::ResetThreeMatchCard() {
}

void AKoikoiField::CheckThreeMatchMonthCard(const TArray<AKoikoiCard*>& cards) {
}



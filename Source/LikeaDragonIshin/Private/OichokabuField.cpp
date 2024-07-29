#include "OichokabuField.h"

AOichokabuField::AOichokabuField(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->firstDistDelayTime = 0.00f;
    this->parentCardDelayTime = 2.00f;
    this->childNumber = 4;
    this->childCardRandomAngleRange = 10.00f;
    this->secondCardOpenSpeed = 4.00f;
}

TArray<EHanafudaCardKind> AOichokabuField::ShuffleDeckDebug() {
    return TArray<EHanafudaCardKind>();
}

TArray<EHanafudaCardKind> AOichokabuField::ShuffleDeck() {
    return TArray<EHanafudaCardKind>();
}

void AOichokabuField::Reset() {
}

AKoikoiCard* AOichokabuField::OpenSecondCard(int32 childNum, FVector& cursolPos, bool isUiDisp, int32 uiIndex, int32& outUiIndex) {
    return NULL;
}

TArray<FVector> AOichokabuField::GetSelectedChildCardPoses(TArray<int32> Index) const {
    return TArray<FVector>();
}

int32 AOichokabuField::GetParentLastDigitOpenCard() const {
    return 0;
}

int32 AOichokabuField::GetParentLastDigit() const {
    return 0;
}

int32 AOichokabuField::GetParentCardNum() const {
    return 0;
}

int32 AOichokabuField::GetLastDigitOpenCardOnly(const TArray<AKoikoiCard*>& cards) const {
    return 0;
}

int32 AOichokabuField::GetLastDigit(const TArray<AKoikoiCard*>& cards) const {
    return 0;
}

int32 AOichokabuField::GetChildLastDigitOpenCard(int32 child) const {
    return 0;
}

int32 AOichokabuField::GetChildLastDigit(int32 child) const {
    return 0;
}

int32 AOichokabuField::GetChildCardNum(int32 child) const {
    return 0;
}

AKoikoiCard* AOichokabuField::FirstCardDist(int32& uiIndex) {
    return NULL;
}

AKoikoiCard* AOichokabuField::DrawCardParent(bool isPlayer, int32 uiIndex, int32& outUiIndex) {
    return NULL;
}

AKoikoiCard* AOichokabuField::DrawCardMonth(int32 Month) {
    return NULL;
}

AKoikoiCard* AOichokabuField::DrawCardChild(int32 child, bool isBack, bool isUiDisp, int32 uiIndex, int32& outUiIndex) {
    return NULL;
}

AKoikoiCard* AOichokabuField::DrawCard() {
    return NULL;
}

EOichokabuAttribute AOichokabuField::CheckParentAttribute(bool isShirokuOn, bool isDoshippinOn) const {
    return EOichokabuAttribute::Buta;
}

EOichokabuAttribute AOichokabuField::CheckChildAttribute(int32 child, bool isShirokuOn, bool isDoshippinOn) const {
    return EOichokabuAttribute::Buta;
}

EOichokabuAttribute AOichokabuField::CheckAttribute(const TArray<AKoikoiCard*>& cards, bool isParent, bool isShirokuOn, bool isDoshippinOn) const {
    return EOichokabuAttribute::Buta;
}

bool AOichokabuField::CheckArachiReachParent() const {
    return false;
}

bool AOichokabuField::CheckArachiReachChild(int32 child) const {
    return false;
}



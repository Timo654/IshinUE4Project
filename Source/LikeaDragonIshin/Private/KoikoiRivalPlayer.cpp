#include "KoikoiRivalPlayer.h"

AKoikoiRivalPlayer::AKoikoiRivalPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->KoikoiSelectDelayTime = 2.00f;
    this->aiLevel = ERivalLevel::RL_Normal;
}

void AKoikoiRivalPlayer::StartDelay(float Time) {
}

void AKoikoiRivalPlayer::SetEnemyLevel(ERivalLevel lv) {
}

AKoikoiCard* AKoikoiRivalPlayer::HandChoice(const TArray<AKoikoiCard*>& Field, const TArray<FKoikoiAttribute>& myAttribute, const TArray<AKoikoiCard*>& hands, const TArray<FKoikoiAttribute>& rivalAttribute, int32 Month) {
    return NULL;
}

FText AKoikoiRivalPlayer::GetName() const {
    return FText::GetEmpty();
}

AKoikoiCard* AKoikoiRivalPlayer::FieldChoice(const TArray<AKoikoiCard*>& selectable) {
    return NULL;
}

bool AKoikoiRivalPlayer::DelayNow() {
    return false;
}

bool AKoikoiRivalPlayer::AIKoikoiChoice(int32 restMonth, int32 handsNum, int32 myPoint, int32 playerPoint, int32 myMonthPoint, int32 playerMonthPoint) {
    return false;
}

AKoikoiCard* AKoikoiRivalPlayer::AgentTsukimiHanami() {
    return NULL;
}

AKoikoiCard* AKoikoiRivalPlayer::AgentSubSyun(int32 Month) {
    return NULL;
}

AKoikoiCard* AKoikoiRivalPlayer::AgentSubInoShikaCho() {
    return NULL;
}

AKoikoiCard* AKoikoiRivalPlayer::AgentSubGet20PointCard() {
    return NULL;
}

AKoikoiCard* AKoikoiRivalPlayer::AgentSubAoTan() {
    return NULL;
}

AKoikoiCard* AKoikoiRivalPlayer::AgentSubAkaTan() {
    return NULL;
}

AKoikoiCard* AKoikoiRivalPlayer::AgentSelectCard() {
    return NULL;
}

AKoikoiCard* AKoikoiRivalPlayer::AgentSakazuki() {
    return NULL;
}

AKoikoiCard* AKoikoiRivalPlayer::AgentMyAttribute(int32 Month) {
    return NULL;
}

AKoikoiCard* AKoikoiRivalPlayer::AgentKasu() {
    return NULL;
}

AKoikoiCard* AKoikoiRivalPlayer::AgentEnemyAttribute(int32 Month) {
    return NULL;
}

AKoikoiCard* AKoikoiRivalPlayer::AgentDropCard() {
    return NULL;
}



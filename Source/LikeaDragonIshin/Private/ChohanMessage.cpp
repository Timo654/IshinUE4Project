#include "ChohanMessage.h"

AChohanMessage::AChohanMessage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AChohanMessage::TalkStart(ECHOHAN_TALK_TYPE talkType, ECHOHAN_TALK_ID talkId, bool isStay) {
}

void AChohanMessage::TalkRestart() {
}

void AChohanMessage::TalkEndStop() {
}

void AChohanMessage::TalkEnd() {
}

bool AChohanMessage::IsTalking() {
    return false;
}

bool AChohanMessage::IsPageEnd() {
    return false;
}

int32 AChohanMessage::GetNowPage() {
    return 0;
}

void AChohanMessage::Exec() {
}



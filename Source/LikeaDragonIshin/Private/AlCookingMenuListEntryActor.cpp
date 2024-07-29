#include "AlCookingMenuListEntryActor.h"

AAlCookingMenuListEntryActor::AAlCookingMenuListEntryActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

float AAlCookingMenuListEntryActor::GetStarNum() const {
    return 0.0f;
}

bool AAlCookingMenuListEntryActor::GetStarHideFlag() const {
    return false;
}

bool AAlCookingMenuListEntryActor::GetNewIconHide() const {
    return false;
}

FLinearColor AAlCookingMenuListEntryActor::GetNameColor() const {
    return FLinearColor{};
}

FString AAlCookingMenuListEntryActor::GetName() const {
    return TEXT("");
}

bool AAlCookingMenuListEntryActor::GetMadeIconHide() const {
    return false;
}

int32 AAlCookingMenuListEntryActor::GetListIndex() const {
    return 0;
}

bool AAlCookingMenuListEntryActor::GetBk04HideAll() const {
    return false;
}



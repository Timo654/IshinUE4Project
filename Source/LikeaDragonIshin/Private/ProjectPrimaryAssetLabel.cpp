#include "ProjectPrimaryAssetLabel.h"

UProjectPrimaryAssetLabel::UProjectPrimaryAssetLabel() {
    this->bLabelAssetsInMyDirectory = 0;
}

FString UProjectPrimaryAssetLabel::GetIdentifierString() const {
    return TEXT("");
}



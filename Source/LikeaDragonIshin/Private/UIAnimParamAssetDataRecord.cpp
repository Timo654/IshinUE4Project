#include "UIAnimParamAssetDataRecord.h"

FUIAnimParamAssetDataRecord::FUIAnimParamAssetDataRecord() {
    this->DisableAutoPlay = false;
    this->DisableAutoStop = false;
    this->DisableAutoPause = false;
    this->StartAtTime = 0.00f;
    this->NumLoopsToPlay = 0;
    this->PlayMode = EUMGSequencePlayMode::Forward;
    this->PlaybackSpeed = 0.00f;
    this->bRestoreState = false;
    this->NextUIState = EUIState::NotSet;
    this->SETypeA = 0;
    this->SETypeB = 0;
    this->SETypeC = 0;
    this->bSynchronize = false;
}


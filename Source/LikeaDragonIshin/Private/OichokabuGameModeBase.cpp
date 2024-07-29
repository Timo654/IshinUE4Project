#include "OichokabuGameModeBase.h"

AOichokabuGameModeBase::AOichokabuGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->isDoshippinEnable = true;
    this->isShirokunonigeEnable = true;
    this->isUseKabufuda = true;
    this->Level = EOichokabuLevel::OL_Easy;
}



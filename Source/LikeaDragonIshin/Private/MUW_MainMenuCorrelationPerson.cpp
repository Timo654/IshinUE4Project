#include "MUW_MainMenuCorrelationPerson.h"

UMUW_MainMenuCorrelationPerson::UMUW_MainMenuCorrelationPerson() {
    this->characterType = ECorrelationCharacter::None;
    this->isNeedCheck = false;
    this->TextureIndex = 0;
    this->isSelecting = false;
    this->edgeTag = ECorrelationEdgeTag::None;
}



bool UMUW_MainMenuCorrelationPerson::IsDefaultMode() const {
    return false;
}

float UMUW_MainMenuCorrelationPerson::GetZoomScaleRate() const {
    return 0.0f;
}



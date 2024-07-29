#include "MUW_MainMenuCorrelationOrg.h"

UMUW_MainMenuCorrelationOrg::UMUW_MainMenuCorrelationOrg() {
    this->groupType = ECorrelationOrganization::None;
    this->isNeedCheck = false;
    this->isSelecting = false;
}


bool UMUW_MainMenuCorrelationOrg::IsDefaultMode() const {
    return false;
}



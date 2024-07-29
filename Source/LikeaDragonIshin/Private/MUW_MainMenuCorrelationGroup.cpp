#include "MUW_MainMenuCorrelationGroup.h"

UMUW_MainMenuCorrelationGroup::UMUW_MainMenuCorrelationGroup() {
    this->organizationType = ECorrelationOrganization::None;
    this->focusCharacterType = ECorrelationCharacter::None;
    this->edgeTag = ECorrelationEdgeTag::None;
    this->organaizationWidget = NULL;
}

TArray<UMUW_MainMenuCorrelationPerson*> UMUW_MainMenuCorrelationGroup::GetCharacters() {
    return TArray<UMUW_MainMenuCorrelationPerson*>();
}



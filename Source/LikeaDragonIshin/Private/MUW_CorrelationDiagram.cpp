#include "MUW_CorrelationDiagram.h"

UMUW_CorrelationDiagram::UMUW_CorrelationDiagram() {
    this->selectGroupType = ECorrelationOrganization::None;
    this->selectPersonType = ECorrelationCharacter::None;
    this->selectPersonIndex = 0;
    this->FitScale = 1.00f;
    this->DefaultScale = 1.00f;
    this->animationTime = 0.00f;
    this->p_canvasRoot = NULL;
}

void UMUW_CorrelationDiagram::PlayZoomOutAnimation(FVector2D cursorPosition) {
}

void UMUW_CorrelationDiagram::PlayZoomInAnimation(FVector2D cursorPosition) {
}

void UMUW_CorrelationDiagram::GetCursorMoveRange(float& Left, float& Right, float& Top, float& Bottom) {
}



#include "ButtonAssign.h"

FButtonAssign::FButtonAssign() {
    this->Output = EPadButton::CROSS;
    this->useSceneFlag = 0;
    this->disable = false;
    this->Uneditable = false;
    this->editableKeyboard = false;
    this->invisible = false;
    this->debug = false;
}


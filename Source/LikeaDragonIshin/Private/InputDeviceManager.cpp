#include "InputDeviceManager.h"

UInputDeviceManager::UInputDeviceManager() {
    this->padOriginal = NULL;
    this->SystemListener = NULL;
    this->m_pInputDebugStopListener = NULL;
    this->InputConfigKeyboard = NULL;
}

void UInputDeviceManager::TouchInputBp(EPadButton btn) {
}

void UInputDeviceManager::SetMouseCursorBp(EMouseCursorShowMode mode) {
}

void UInputDeviceManager::AllowMouseDecideBp(bool sw) {
}



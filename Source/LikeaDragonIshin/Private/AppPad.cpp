#include "AppPad.h"

UAppPad::UAppPad() {
    this->Controller = NULL;
}

float UAppPad::y2(float mouseInput) const {
    return 0.0f;
}

float UAppPad::y1(float mouseInput) const {
    return 0.0f;
}

float UAppPad::x2(float mouseInput) const {
    return 0.0f;
}

float UAppPad::x1(float mouseInput) const {
    return 0.0f;
}

void UAppPad::set_lightbar2(FColor Color) {
}

void UAppPad::set_lightbar(uint8 R, uint8 G, uint8 B) {
}

void UAppPad::rumble2_stop() {
}

void UAppPad::rumble2_start_f(float forceRate) {
}

void UAppPad::rumble2_start(uint8 Force) {
}

void UAppPad::rumble1_stop() {
}

void UAppPad::rumble1_start_f(float forceRate) {
}

void UAppPad::rumble1_start(uint8 Force) {
}

void UAppPad::reset_lightbar() {
}

bool UAppPad::Repeat2(TArray<EPadButton> buttons) const {
    return false;
}

bool UAppPad::Repeat(EPadButton Button) const {
    return false;
}

bool UAppPad::Push2(TArray<EPadButton> buttons) const {
    return false;
}

bool UAppPad::Push(EPadButton Button) const {
    return false;
}

bool UAppPad::Pull2(TArray<EPadButton> buttons) const {
    return false;
}

bool UAppPad::Pull(EPadButton Button) const {
    return false;
}

bool UAppPad::Now2(TArray<EPadButton> buttons) const {
    return false;
}

bool UAppPad::Now(EPadButton Button) const {
    return false;
}

float UAppPad::mouse_wheel(float Scale) const {
    return 0.0f;
}



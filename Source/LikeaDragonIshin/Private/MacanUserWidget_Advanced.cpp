#include "MacanUserWidget_Advanced.h"

UMacanUserWidget_Advanced::UMacanUserWidget_Advanced() {
}

bool UMacanUserWidget_Advanced::TransUIState(EUIState inState, bool inForce) {
    return false;
}

bool UMacanUserWidget_Advanced::TransPlayAnimationString(const FString& InName, bool inLoop) {
    return false;
}

bool UMacanUserWidget_Advanced::TransPlayAnimation(UWidgetAnimation* inAnim, bool inLoop) {
    return false;
}

bool UMacanUserWidget_Advanced::StopAllAnimation() {
    return false;
}

void UMacanUserWidget_Advanced::SetActiveAnim(UWidgetAnimation* inAnim, bool Inactive) {
}

void UMacanUserWidget_Advanced::ReleaseFinished() {
}

void UMacanUserWidget_Advanced::PressFinished() {
}

void UMacanUserWidget_Advanced::Pressed(UPanelWidget* inPanelWidget, int32 inIndex) {
}

bool UMacanUserWidget_Advanced::PlayingAnimation(const FString& InName) {
    return false;
}

void UMacanUserWidget_Advanced::PlayCtrlAnimation(UWidgetAnimation* inAnim) {
}

bool UMacanUserWidget_Advanced::PlayAnimationString(const FString& InName, bool inLoop) {
    return false;
}

void UMacanUserWidget_Advanced::OutFinished() {
}

void UMacanUserWidget_Advanced::InStarted() {
}

UWidgetAnimation* UMacanUserWidget_Advanced::GetAnimation(const FString& InName) {
    return NULL;
}

void UMacanUserWidget_Advanced::FocusOut(UPanelWidget* inPanelWidget) {
}

void UMacanUserWidget_Advanced::FocusInScrollBox(UScrollBox* inScrollWidget, int32 inIndex, bool isAnimate, int32 InRange) {
}

void UMacanUserWidget_Advanced::FocusIn(UPanelWidget* inPanelWidget, int32 inIndex) {
}

bool UMacanUserWidget_Advanced::ExistAnimation(const FString& InName) {
    return false;
}

void UMacanUserWidget_Advanced::CtrlAnim() {
}

void UMacanUserWidget_Advanced::BindVisibleOn(const FString& InName) {
}

void UMacanUserWidget_Advanced::BindVisibleOff(const FString& InName) {
}



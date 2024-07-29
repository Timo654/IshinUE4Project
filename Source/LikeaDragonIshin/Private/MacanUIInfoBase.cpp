#include "MacanUIInfoBase.h"
#include "Templates/SubclassOf.h"

UMacanUIInfoBase::UMacanUIInfoBase() {
    this->bfWidget = 0;
    this->MainType = EUIMainType::NotSet;
    this->category = EUICategory::NotSet;
    this->SubCategory = EUISubCategory::NotSet;
    this->WidgetClass = NULL;
    this->UserWidget = NULL;
    this->ZOrderType = EUIZOrderType::NotSet;
    this->OwningType = EUIOwningType::NotSet;
    this->UIData = NULL;
    this->UIDataClass = NULL;
    this->IsResident = false;
    this->CleanupSkipingSpecialCounter = 0;
}

void UMacanUIInfoBase::SetBfUpdateByUI() {
}

void UMacanUIInfoBase::SetBfUpdateBySystem() {
}

void UMacanUIInfoBase::SetBfUpdateByGame() {
}

void UMacanUIInfoBase::SetBfReqRemoveWidget() {
}

void UMacanUIInfoBase::SetBfReqReleaseWidget() {
}

void UMacanUIInfoBase::SetBfReqLoadWidget() {
}

void UMacanUIInfoBase::SetBfReqDestroyInfo() {
}

void UMacanUIInfoBase::SetBfReqCreateWidget() {
}

void UMacanUIInfoBase::SetBfReqAddView() {
}

void UMacanUIInfoBase::SetBfPrepared() {
}

void UMacanUIInfoBase::SetBfLoadedWidget() {
}

void UMacanUIInfoBase::SetBfCreatedWidget() {
}

void UMacanUIInfoBase::SetBfAddedView() {
}

void UMacanUIInfoBase::ReflectChangesByUI() {
}

void UMacanUIInfoBase::ReflectChangesBySystem() {
}

void UMacanUIInfoBase::ReflectChangesByGame() {
}

bool UMacanUIInfoBase::IsBfUpdateByUI() const {
    return false;
}

bool UMacanUIInfoBase::IsBfUpdateBySystem() const {
    return false;
}

bool UMacanUIInfoBase::IsBfUpdateByGame() const {
    return false;
}

bool UMacanUIInfoBase::IsBfReqRemoveWidget() const {
    return false;
}

bool UMacanUIInfoBase::IsBfReqReleaseWidget() const {
    return false;
}

bool UMacanUIInfoBase::IsBfReqLoadWidget() const {
    return false;
}

bool UMacanUIInfoBase::IsBfReqDestroyInfo() const {
    return false;
}

bool UMacanUIInfoBase::IsBfReqCreateWidget() const {
    return false;
}

bool UMacanUIInfoBase::IsBfReqAddView() const {
    return false;
}

bool UMacanUIInfoBase::IsBfPrepared() const {
    return false;
}

bool UMacanUIInfoBase::IsBfLoadedWidget() const {
    return false;
}

bool UMacanUIInfoBase::IsBfCreatedWidget() const {
    return false;
}

bool UMacanUIInfoBase::IsBfAddedView() const {
    return false;
}

void UMacanUIInfoBase::GetUIData(TSubclassOf<UMacanUIData> dataClass, UMacanUIData*& outUIData, EUIResultSuccessOrFailed& result) {
}

void UMacanUIInfoBase::DelBfUpdateByUI() {
}

void UMacanUIInfoBase::DelBfUpdateBySystem() {
}

void UMacanUIInfoBase::DelBfUpdateByGame() {
}

void UMacanUIInfoBase::DelBfReqRemoveWidget() {
}

void UMacanUIInfoBase::DelBfReqReleaseWidget() {
}

void UMacanUIInfoBase::DelBfReqLoadWidget() {
}

void UMacanUIInfoBase::DelBfReqDestroyInfo() {
}

void UMacanUIInfoBase::DelBfReqCreateWidget() {
}

void UMacanUIInfoBase::DelBfReqAddView() {
}

void UMacanUIInfoBase::DelBfPrepared() {
}

void UMacanUIInfoBase::DelBfLoadedWidget() {
}

void UMacanUIInfoBase::DelBfCreatedWidget() {
}

void UMacanUIInfoBase::DelBfAddedView() {
}

void UMacanUIInfoBase::CallUpdate() {
}



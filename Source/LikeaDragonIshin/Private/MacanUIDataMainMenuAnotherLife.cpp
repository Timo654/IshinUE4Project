#include "MacanUIDataMainMenuAnotherLife.h"

UMacanUIDataMainMenuAnotherLife::UMacanUIDataMainMenuAnotherLife() {
    this->poultryFarmLv = 0.00f;
    this->dogHouseLv = 0.00f;
    this->carBedLv = 0.00f;
    this->cookWareLv = 0.00f;
    this->harukaRank = 0;
    this->harukaGuage = 0.00f;
    this->harukaTextureId = 0;
    this->isUIUpdate.AddDefaulted(50);
    this->patTextureD00 = NULL;
    this->patTextureD01 = NULL;
    this->patTextureD02 = NULL;
    this->patTextureC00 = NULL;
    this->patTextureC01 = NULL;
    this->patTextureC02 = NULL;
    this->bgTexture = NULL;
    this->bgHarukaTexture = NULL;
    this->cursolFlag.AddDefaulted(3);
}

bool UMacanUIDataMainMenuAnotherLife::IsNeedUpdateThisUI(EAnotherMainMenuUI uiType, EUIResultOnOrOff& result) {
    return false;
}

FText UMacanUIDataMainMenuAnotherLife::GetTitlePoultryFarm() const {
    return FText::GetEmpty();
}

FText UMacanUIDataMainMenuAnotherLife::GetTitleInterior() const {
    return FText::GetEmpty();
}

FText UMacanUIDataMainMenuAnotherLife::GetTitleFishigRod() const {
    return FText::GetEmpty();
}

FText UMacanUIDataMainMenuAnotherLife::GetTitleDogHouseLv() const {
    return FText::GetEmpty();
}

FText UMacanUIDataMainMenuAnotherLife::GetTitleCookWare() const {
    return FText::GetEmpty();
}

FText UMacanUIDataMainMenuAnotherLife::GetTitleCarBed() const {
    return FText::GetEmpty();
}

FText UMacanUIDataMainMenuAnotherLife::GetStatePoultryFarm() const {
    return FText::GetEmpty();
}

FText UMacanUIDataMainMenuAnotherLife::GetStateInterior() const {
    return FText::GetEmpty();
}

FText UMacanUIDataMainMenuAnotherLife::GetStateFishigRod() const {
    return FText::GetEmpty();
}

FText UMacanUIDataMainMenuAnotherLife::GetStateDogHouseLv() const {
    return FText::GetEmpty();
}

FText UMacanUIDataMainMenuAnotherLife::GetStateCookWare() const {
    return FText::GetEmpty();
}

FText UMacanUIDataMainMenuAnotherLife::GetStateCarBed() const {
    return FText::GetEmpty();
}

FText UMacanUIDataMainMenuAnotherLife::GetPetNameD02() const {
    return FText::GetEmpty();
}

FText UMacanUIDataMainMenuAnotherLife::GetPetNameD01() const {
    return FText::GetEmpty();
}

FText UMacanUIDataMainMenuAnotherLife::GetPetNameD00() const {
    return FText::GetEmpty();
}

FText UMacanUIDataMainMenuAnotherLife::GetPetNameC02() const {
    return FText::GetEmpty();
}

FText UMacanUIDataMainMenuAnotherLife::GetPetNameC01() const {
    return FText::GetEmpty();
}

FText UMacanUIDataMainMenuAnotherLife::GetPetNameC00() const {
    return FText::GetEmpty();
}

TArray<bool> UMacanUIDataMainMenuAnotherLife::GetCursolFlags() const {
    return TArray<bool>();
}

void UMacanUIDataMainMenuAnotherLife::FinishUpdateUI(EAnotherMainMenuUI uiType) {
}



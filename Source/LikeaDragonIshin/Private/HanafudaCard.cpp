#include "HanafudaCard.h"

FHanafudaCard::FHanafudaCard() {
    this->CardKind = EHanafudaCardKind::HCK_Matsu_Tsuru;
    this->pCardTexture = NULL;
    this->pKabuCardTexture = NULL;
    this->CardRank = EHanafudaCardRank::HCR_Kasu;
    this->CardMonth = 0;
}


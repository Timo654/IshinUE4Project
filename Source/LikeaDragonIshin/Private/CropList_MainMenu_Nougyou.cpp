#include "CropList_MainMenu_Nougyou.h"

FCropList_MainMenu_Nougyou::FCropList_MainMenu_Nougyou() {
    this->item_id = 0;
    this->layer_info = 0;
    this->X = 0;
    this->Y = 0;
    this->State = EUIState::NotSet;
    this->Index = 0;
    this->is_harvest = false;
    this->progress = 0;
    this->state_koyashi = EUIState::NotSet;
    this->state_kan = EUIState::NotSet;
}


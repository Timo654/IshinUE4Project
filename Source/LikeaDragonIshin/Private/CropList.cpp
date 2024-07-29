#include "CropList.h"

FCropList::FCropList() {
    this->item_id = 0;
    this->layer_info = 0;
    this->X = 0;
    this->Y = 0;
    this->State = EUIState::NotSet;
    this->Index = 0;
    this->z_order = 0;
    this->visible = false;
    this->is_focus = false;
    this->is_akawaku = false;
    this->is_harvest = false;
    this->progress = 0;
    this->state_koyashi = EUIState::NotSet;
    this->state_kan = EUIState::NotSet;
    this->is_ready_kan_anim = false;
}


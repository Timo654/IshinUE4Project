#include "InputSystemData.h"

FInputSystemData::FInputSystemData() {
    this->camera_vertical_normal = false;
    this->camera_horizontal_normal = false;
    this->camera_sub_vertical = false;
    this->camera_sub_horizontal = false;
    this->stick_switch = false;
    this->vibrate_on = false;
    this->camera_auto = false;
    this->camera_speed_pad = 0;
    this->camera_speed_mouse = 0;
}


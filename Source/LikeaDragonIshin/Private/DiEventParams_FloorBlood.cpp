#include "DiEventParams_FloorBlood.h"

FDiEventParams_FloorBlood::FDiEventParams_FloorBlood() {
    this->tex_type = 0;
    this->shape_type = EFloorBloodShape::YEN;
    this->Rotation = 0.00f;
    this->ang_or_width = 0.00f;
    this->Range = 0.00f;
    this->create_num = 0;
    this->start_size = 0.00f;
    this->end_size = 0.00f;
    this->random_size = 0.00f;
    this->start_time = 0.00f;
    this->all_time = 0.00f;
    this->scale_time = 0.00f;
    this->death_start_time = 0.00f;
    this->death_all_time = 0.00f;
    this->Power = 0.00f;
    this->Scale = 0.00f;
    this->is_start_size_random = false;
    this->is_end_size_random = false;
    this->is_pos_random = false;
    this->is_specular = false;
    this->is_set_type_1 = false;
    this->is_set_type_2 = false;
    this->is_same_rotate = false;
}


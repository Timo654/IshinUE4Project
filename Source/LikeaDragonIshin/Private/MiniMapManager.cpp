#include "MiniMapManager.h"

AMiniMapManager::AMiniMapManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->icon_actor_class = NULL;
    this->x_offset_standard = 100000.00f;
    this->z_height_standard = 1500.00f;
    this->z_height_delta = 5.00f;
    this->OrthoScaleNormal = 0.40f;
    this->OrthoScalePause = 1.00f;
    this->OrthoScaleSubStory = 0.65f;
    this->IconScale1 = 0.00f;
    this->IconScalePause = 0.70f;
    this->map_camera_actor = NULL;
}

bool AMiniMapManager::WaitSubstoryModePrepare() {
    return false;
}

void AMiniMapManager::updateMapIcon2(int32 icon_id, const FIconUpdateParam& Param) {
}

void AMiniMapManager::updateMapIcon(int32 icon_id, const FVector2D& in_pos, float in_rot) {
}

void AMiniMapManager::SubstoryMode(bool sw) {
}

void AMiniMapManager::setVisibleMapIcon(int32 icon_id, bool visible) {
}

void AMiniMapManager::getMapName() const {
}

AMiniMapCameraActor* AMiniMapManager::getMapCamera() {
    return NULL;
}

void AMiniMapManager::destroyMapIcon(int32 icon_id) {
}

void AMiniMapManager::destroyAllMapIcon() {
}

int32 AMiniMapManager::createMapIcon(EMapLocationIconCategory icon_cat, const FVector2D& in_pos, float in_rot, int32 z_level) {
    return 0;
}

int32 AMiniMapManager::createMapCharactorIcon(EMapCharactorIconCategory ch_cat, const FVector2D& in_pos, float in_rot, int32 z_level) {
    return 0;
}



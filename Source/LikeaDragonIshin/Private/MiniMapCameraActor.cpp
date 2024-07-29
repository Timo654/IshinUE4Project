#include "MiniMapCameraActor.h"

AMiniMapCameraActor::AMiniMapCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->rot_camera = 0.00f;
    this->rot_chara = 0.00f;
    this->isInsightDestination = false;
    this->rot_destination = 0.00f;
    this->RT_Map = NULL;
    this->rt_minimap = NULL;
    this->SceneCapture = NULL;
    this->isChangeMiniMapTexture = false;
}






void AMiniMapCameraActor::onSetRotation_BP(float cam_rot, float chara_rot) {
}


void AMiniMapCameraActor::onSetPosition_BP(const FVector& Pos) {
}


void AMiniMapCameraActor::onSetOrthoWidge_BP(float Size) {
}


void AMiniMapCameraActor::onSetNorthUp_BP(bool isNorthUp) {
}


void AMiniMapCameraActor::onSetDestination_BP(bool IsValid, const FVector& Pos) {
}




void AMiniMapCameraActor::getRotation(float& camera_rotation, float& chara_rotation, bool& destination_insight, float& destination_rotation) {
}


void AMiniMapCameraActor::addShowOnlyActorMapIcon_BP(AActor* Actor) {
}


void AMiniMapCameraActor::addShowOnlyActorMap_BP(AActor* Actor) {
}





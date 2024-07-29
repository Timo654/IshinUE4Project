#include "ChildHumanComponent.h"
#include "Components/PoseableMeshComponent.h"
#include "EyeHighMaterialParamComponent.h"
#include "FaceMaterialParamComponent.h"
#include "HairMaterialParamComponent.h"
#include "MouthMaterialParamComponent.h"
#include "NeckJointMaterialParamComponent.h"
#include "SkinMaterialParamComponent.h"

UChildHumanComponent::UChildHumanComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bVisibleShoes = true;
    this->MeshBody = CreateDefaultSubobject<UPoseableMeshComponent>(TEXT("MeshBody"));
    this->MeshHair = CreateDefaultSubobject<UPoseableMeshComponent>(TEXT("MeshHair"));
    this->Height = -1;
    this->EyeHighComponent = CreateDefaultSubobject<UEyeHighMaterialParamComponent>(TEXT("EyeHighMaterialParamComponent"));
    this->MouthComponent = CreateDefaultSubobject<UMouthMaterialParamComponent>(TEXT("MouthMaterialParamComponent"));
    this->SkinComponent = CreateDefaultSubobject<USkinMaterialParamComponent>(TEXT("SkinMaterialParamComponent"));
    this->HairComponent = CreateDefaultSubobject<UHairMaterialParamComponent>(TEXT("HairMaterialParamComponent"));
    this->FaceComponent = CreateDefaultSubobject<UFaceMaterialParamComponent>(TEXT("FaceMaterialParamComponent"));
    this->NeckJointComponent = CreateDefaultSubobject<UNeckJointMaterialParamComponent>(TEXT("NeckJointMaterialParamComponent"));
    this->ClothSodeCapsuleScale = 1.00f;
    this->ClothSusoCapsuleScale = 1.00f;
}

void UChildHumanComponent::SetVisibleShoes(bool bVis) {
}

void UChildHumanComponent::SetHeight(int32 Value) {
}

void UChildHumanComponent::SetClothSusoCapsuleScale(float Value) {
}

void UChildHumanComponent::SetClothSodeCapsuleScale(float Value) {
}



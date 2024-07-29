#include "EffectCopyMeshComponent.h"

UEffectCopyMeshComponent::UEffectCopyMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ParentMesh = NULL;
    this->DrawStaticMesh = NULL;
}

bool UEffectCopyMeshComponent::IsEmptyCopyMesh() {
    return false;
}

int32 UEffectCopyMeshComponent::DrawMeshNum() {
    return 0;
}

int32 UEffectCopyMeshComponent::CopyMeshNum() {
    return 0;
}

void UEffectCopyMeshComponent::AddCopyMesh(UMeshComponent* Mesh) {
}



#include "SexyMeshActor.h"
#include "ProceduralMeshComponent.h"

ASexyMeshActor::ASexyMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("ProceduralMeshComponent0"));
    this->ProceduralMeshComponent = (UProceduralMeshComponent*)RootComponent;
}



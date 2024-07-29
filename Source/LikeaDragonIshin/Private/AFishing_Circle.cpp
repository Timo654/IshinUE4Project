#include "AFishing_Circle.h"
#include "ProceduralMeshComponent.h"

AAFishing_Circle::AAFishing_Circle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("CustomMesh"));
    this->s_mesh = NULL;
    this->CustomMesh = (UProceduralMeshComponent*)RootComponent;
    this->m_material = NULL;
    this->CustomMesh_Line = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("CustomMesh_Line"));
    this->m_material_line = NULL;
}



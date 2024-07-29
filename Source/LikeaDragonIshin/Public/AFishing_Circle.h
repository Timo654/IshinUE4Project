#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AFishing_Circle.generated.h"

class AAFishing_Circle;
class UMaterialInstanceDynamic;
class UProceduralMeshComponent;

UCLASS(Blueprintable)
class AAFishing_Circle : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAFishing_Circle* s_mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProceduralMeshComponent* CustomMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* m_material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProceduralMeshComponent* CustomMesh_Line;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* m_material_line;
    
public:
    AAFishing_Circle(const FObjectInitializer& ObjectInitializer);

};


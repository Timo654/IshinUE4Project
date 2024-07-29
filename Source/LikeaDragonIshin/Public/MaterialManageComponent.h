#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MaterialManage_MeshInfo.h"
#include "MaterialManageComponent.generated.h"

class UMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UMaterialManageComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UMeshComponent*, FMaterialManage_MeshInfo> MeshMaterials;
    
public:
    UMaterialManageComponent(const FObjectInitializer& ObjectInitializer);

};


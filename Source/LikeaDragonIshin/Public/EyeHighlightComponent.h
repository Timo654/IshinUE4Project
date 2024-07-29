#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EyeHighlightComponent.generated.h"

class UMaterialInstanceDynamic;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UEyeHighlightComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ParentMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Material;
    
public:
    UEyeHighlightComponent(const FObjectInitializer& ObjectInitializer);

};


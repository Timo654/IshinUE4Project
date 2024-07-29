#pragma once
#include "CoreMinimal.h"
#include "Components/PoseableMeshComponent.h"
#include "MacanPoseableMeshComponent.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UMacanPoseableMeshComponent : public UPoseableMeshComponent {
    GENERATED_BODY()
public:
    UMacanPoseableMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ForceCopyPoseFromSkeletalComponent(USkeletalMeshComponent* InComponentToCopy);
    
};


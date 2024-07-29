#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EffectTrackInfo.h"
#include "EffectTrackComponent.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UEffectTrackComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FEffectTrackInfo Info;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ParentMesh;
    
public:
    UEffectTrackComponent(const FObjectInitializer& ObjectInitializer);

};


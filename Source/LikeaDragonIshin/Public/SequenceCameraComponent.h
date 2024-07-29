#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SequenceCameraComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API USequenceCameraComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ParentActorLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CameraActorTag;
    
    USequenceCameraComponent(const FObjectInitializer& ObjectInitializer);

};


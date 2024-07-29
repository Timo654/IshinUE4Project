#pragma once
#include "CoreMinimal.h"
#include "SSSMaterialParamComponent.h"
#include "FaceMaterialParamComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UFaceMaterialParamComponent : public USSSMaterialParamComponent {
    GENERATED_BODY()
public:
    UFaceMaterialParamComponent(const FObjectInitializer& ObjectInitializer);

};


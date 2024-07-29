#pragma once
#include "CoreMinimal.h"
#include "SSSMaterialParamComponent.h"
#include "SkinMaterialParamComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API USkinMaterialParamComponent : public USSSMaterialParamComponent {
    GENERATED_BODY()
public:
    USkinMaterialParamComponent(const FObjectInitializer& ObjectInitializer);

};


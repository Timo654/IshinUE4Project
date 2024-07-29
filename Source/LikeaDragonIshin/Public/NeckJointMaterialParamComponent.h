#pragma once
#include "CoreMinimal.h"
#include "SSSMaterialParamComponent.h"
#include "NeckJointMaterialParamComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UNeckJointMaterialParamComponent : public USSSMaterialParamComponent {
    GENERATED_BODY()
public:
    UNeckJointMaterialParamComponent(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HumanMaterialParamComponent.generated.h"

class UChildHumanComponent;
class UMaterialInstanceDynamic;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UHumanMaterialParamComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UChildHumanComponent* HumanComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> MaterialDynamicArray;
    
public:
    UHumanMaterialParamComponent(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "HumanMaterialParamComponent.h"
#include "MouthMaterialParamComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UMouthMaterialParamComponent : public UHumanMaterialParamComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouthBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouthRoughness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeethBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeethRoughness;
    
    UMouthMaterialParamComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTeethRoughness(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetTeethBrightness(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMouthRoughness(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMouthBrightness(float Value);
    
};


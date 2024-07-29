#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ERimFlashPosition.h"
#include "EffectCopyMeshComponent.h"
#include "RimFlashPlayInfo.h"
#include "EffectRimFlashComponent.generated.h"

class UMaterialInstanceDynamic;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UEffectRimFlashComponent : public UEffectCopyMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor inColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Fresnel_Exponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Fresnel_ReflectFraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TArray<FRimFlashPlayInfo> Positions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Enable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> Materials;
    
public:
    UEffectRimFlashComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPosition(ERimFlashPosition position, float Value);
    
    UFUNCTION(BlueprintCallable)
    void RemovePosition(ERimFlashPosition position, UObject* Parent);
    
    UFUNCTION(BlueprintCallable)
    void AddPosition(ERimFlashPosition position, UObject* Parent);
    
};


#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PostEffectCrossFade.generated.h"

class UMaterialInstanceDynamic;
class UPostProcessComponent;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API APostEffectCrossFade : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* PostProcessVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DrawMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* ColorTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float ZoomScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Enable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 SortPriority;
    
    APostEffectCrossFade(const FObjectInitializer& ObjectInitializer);

};


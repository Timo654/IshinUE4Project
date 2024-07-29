#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EffectInk.generated.h"

class UCopySceneTextureComponent;
class UEffectInkTextureComponent;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API AEffectInk : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEffectInkTextureComponent* EffectInkTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCopySceneTextureComponent* CopySceneTexture;
    
public:
    AEffectInk(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetZoomUVOffset(float zoom_uv_ofs);
    
    UFUNCTION(BlueprintCallable)
    void SetOneShot();
    
    UFUNCTION(BlueprintCallable)
    void SetAlpha(float Alpha);
    
    UFUNCTION(BlueprintCallable)
    UTextureRenderTarget2D* GetTexture();
    
};


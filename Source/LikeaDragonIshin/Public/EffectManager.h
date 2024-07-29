#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EffectManager.generated.h"

class AEffectBlood;
class AEffectProjectionBlood;
class AParticle;
class APostEffectCopy;
class APostEffectOldFilm;
class APostProcessVolume;
class UCopySceneTextureComponent;
class UEffectHighLightComponent;
class UManaTexture;
class UMaterialInstanceDynamic;
class UPerlinNoiseTextureComponent;
class URandomNoiseTexture;
class USmoothNoiseTextureComponent;
class UTexture2D;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class UEffectManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AEffectBlood*> EffectBloods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APostProcessVolume* PostProcessVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APostProcessVolume* PostProcessVolumePUB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APostEffectOldFilm* OldFilm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UManaTexture* MovieTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MovieMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DistanceFogMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URandomNoiseTexture* InkNoiseTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPerlinNoiseTextureComponent* BloodNoiseTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPerlinNoiseTextureComponent* DamageNoiseTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USmoothNoiseTextureComponent* WaterNoiseTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCopySceneTextureComponent* CopySceneTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RenderTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APostEffectCopy* PostEffectCopy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FVector> LookTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEffectHighLightComponent*> EffectHighLights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AEffectProjectionBlood*> ProjectionBloods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AParticle*> BloomParticles;
    
public:
    UEffectManager();

    UFUNCTION(BlueprintCallable)
    UTextureRenderTarget2D* GetWaterNoiseTexture();
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetInkNoiseTexture();
    
    UFUNCTION(BlueprintCallable)
    UTextureRenderTarget2D* GetDamageNoiseTexture();
    
    UFUNCTION(BlueprintCallable)
    UTextureRenderTarget2D* GetBloodNoiseTexture();
    
};


#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EffectCommonDataAsset.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UEffectCommonDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SetParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ParticleBrunchCollisionMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ParticleBrunchWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ParticleBrunchRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ParticleBrunchGuard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ParticleBrunchFighter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ParticleCommon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ParticleCommonDevil2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ParticleCommonList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ParticleOneshotSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ParticleDisableBloodInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ParticlePoolInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ParticleStagePoolInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EffectTrackTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EffectTrackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EffectTrackDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EffectMaterialInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EffectAnimationInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EffectBloodTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EffectInkTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EffectLUTTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EffectSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EffectAttributeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EffectStageDrawOFFExposure;
    
public:
    UEffectCommonDataAsset();

    UFUNCTION(BlueprintCallable)
    UDataTable* GetSetParticleList();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetParticleStagePoolInfo();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetParticlePoolInfo();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetParticleOneshotSE();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetParticleDisableBloodInfo();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetParticleCommonList();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetParticleCommonDevil2();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetParticleCommon();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetParticleBrunchCollisionMaterial();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetEffectTrackTexture();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetEffectStageDrawOFFExposure();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetEffectSequence();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetEffectMaterialInfo();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetEffectLUTTexture();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetEffectInkTexture();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetEffectBloodTexture();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetEffectAttributeInfo();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetEffectAnimationInfo();
    
};


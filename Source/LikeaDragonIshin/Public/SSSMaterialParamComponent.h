#pragma once
#include "CoreMinimal.h"
#include "HumanMaterialParamComponent.h"
#include "SSSMaterialParamComponent.generated.h"

class USSSMaterialParamComponent;
class USubsurfaceProfile;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API USSSMaterialParamComponent : public UHumanMaterialParamComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSSMaterialParamComponent* SyncSSSMaterialParamComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSSMaterialParamComponent* SyncSSSMaterialParamComponent2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USubsurfaceProfile* DefaultSubsurfaceProfile;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USubsurfaceProfile* SubsurfaceProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Desaturation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlobalAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HueShift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Roughness;
    
    USSSMaterialParamComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTextureLightMode();
    
    UFUNCTION(BlueprintCallable)
    void SetSubsurfaceProfileLightMode();
    
    UFUNCTION(BlueprintCallable)
    void SetSubsurfaceProfile(USubsurfaceProfile* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRoughness(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHueShift(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetGlobalAlpha(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDesaturation(float Value);
    
};


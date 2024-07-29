#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HumanMaterialParamComponent.h"
#include "HairMaterialParamComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UHairMaterialParamComponent : public UHumanMaterialParamComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AO_DepthMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AO_FacingAO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PixelDepthOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Specular;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Brightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Roughness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scatter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomHueVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomValueVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Variation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Tangent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TangentA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TangentB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor RootColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TipColor;
    
    UHairMaterialParamComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVariation(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetTipColor(FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    void SetTangentB(FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    void SetTangentA(FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    void SetTangent(FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSpecular(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetScatter(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRoughness(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRootColor(FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRandomValueVariation(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRandomHueVariation(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetPixelDepthOffset(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBrightness(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAO_FacingAO(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAO_DepthMax(float Value);
    
};


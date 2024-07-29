#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HumanMaterialParamComponent.h"
#include "EyeHighMaterialParamComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UEyeHighMaterialParamComponent : public UHumanMaterialParamComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighLightBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighLightBrightness1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighLightBrightness2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighLightBrightness3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighLightGradiation1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighLightGradiation2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighLightGradiation3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IrisBRightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PupileScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScleraBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpecularityIris;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpecularityScelera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HighLightColor1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HighLightColor2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HighLightColor3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HighLightVector1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HighLightVector2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HighLightVector3;
    
    UEyeHighMaterialParamComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSpecularityScelera(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSpecularityIris(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetScleraBrightness(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetPupileScale(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetIrisBRightness(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHighLightVector3(FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHighLightVector2(FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHighLightVector1(FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHighLightGradiation3(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHighLightGradiation2(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHighLightGradiation1(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHighLightColor3(FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHighLightColor2(FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHighLightColor1(FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHighLightBrightness3(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHighLightBrightness2(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHighLightBrightness1(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHighLightBias(float Value);
    
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Texture.h"
#include "EBattleCaptionLanguage.h"
#include "EBattleCaptionUI.h"
#include "EUIResultOnOrOff.h"
#include "MacanUIData.h"
#include "eUI_OC_CAP.h"
#include "MacanUIDataBattleCaption.generated.h"

class ABattleCaptionEffect;
class APostProcessVolume;
class UNiagaraComponent;
class UTextureRenderTarget2D;
class UUserWidget;
class UWidget;

UCLASS(Blueprintable)
class UMacanUIDataBattleCaption : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString layout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Caption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString emblem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Subtitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float blur_start_frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float blur_end_frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    eUI_OC_CAP Scene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator spawnRot;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform baseCameraTrandform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isUseFromTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattleCaptionEffect* effectActor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> isUIUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APostProcessVolume* postProcessVol;
    
public:
    UMacanUIDataBattleCaption();

    UFUNCTION(BlueprintCallable)
    void UseFromTransform(FTransform trans);
    
    UFUNCTION(BlueprintCallable)
    void UnUseFromTransform();
    
    UFUNCTION(BlueprintCallable)
    void StopCaption();
    
    UFUNCTION(BlueprintCallable)
    UNiagaraComponent* SpawnEffectEncount(FVector posOffset, FVector Scale, float ZOffset);
    
    UFUNCTION(BlueprintCallable)
    UNiagaraComponent* SpawnEffectBoss(FVector posOffset, FVector Scale, float ZOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayFlag(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayEffectFlag(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void PlayCaption();
    
    UFUNCTION(BlueprintCallable)
    void LoadEffectEncount();
    
    UFUNCTION(BlueprintCallable)
    void LoadEffectBoss();
    
    UFUNCTION(BlueprintCallable)
    void LoadCaption(const FString& in_layout, const FString& in_name, const FString& in_caption, const FString& in_emblem, const FString& in_subtitle, float in_start, float in_end, eUI_OC_CAP in_scene);
    
    UFUNCTION(BlueprintCallable)
    bool IsUiInvisibleAll();
    
    UFUNCTION(BlueprintCallable)
    bool IsRendererbleTexture(UTextureRenderTarget2D* Texture);
    
    UFUNCTION(BlueprintCallable)
    bool IsNeedUpdateThisUI(EBattleCaptionUI uiType, EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsNeedUpdate(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetRenderTargetSize();
    
    UFUNCTION(BlueprintCallable)
    EBattleCaptionLanguage GetLanguage();
    
    UFUNCTION(BlueprintCallable)
    FLinearColor GetInverseColorTemperature();
    
    UFUNCTION(BlueprintCallable)
    void FinishUpdateUI(EBattleCaptionUI uiType);
    
    UFUNCTION(BlueprintCallable)
    static bool DrawWidgetToTarget(UTextureRenderTarget2D* Target, UUserWidget* WidgetToRender, FVector2D DrawSize, bool UseGamma, TEnumAsByte<TextureFilter> Filter, float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    static bool DrawUWidgetToTarget(UTextureRenderTarget2D* Target, UWidget* WidgetToRender, FVector2D DrawSize, bool UseGamma, TEnumAsByte<TextureFilter> Filter, float DeltaTime);
    
};


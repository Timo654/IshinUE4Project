#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EffectInkTextureComponent.generated.h"

class UTexture2D;
class UTextureRenderTarget2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MACANSHADERS_API UEffectInkTextureComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* ToneTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* InkTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> PaperTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* NoiseTexture;
    
public:
    UEffectInkTextureComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool IsPrepared();
    
    UFUNCTION(BlueprintCallable)
    UTextureRenderTarget2D* GetToneTexture();
    
    UFUNCTION(BlueprintCallable)
    UTextureRenderTarget2D* GetInkTexture();
    
};


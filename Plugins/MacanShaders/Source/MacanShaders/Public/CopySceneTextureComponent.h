#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CopySceneTextureComponent.generated.h"

class UTextureRenderTarget2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MACANSHADERS_API UCopySceneTextureComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RenderTexture;
    
public:
    UCopySceneTextureComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTexture(UTextureRenderTarget2D* Texture);
    
    UFUNCTION(BlueprintCallable)
    bool IsPrepared();
    
    UFUNCTION(BlueprintCallable)
    UTextureRenderTarget2D* GetTexture();
    
};


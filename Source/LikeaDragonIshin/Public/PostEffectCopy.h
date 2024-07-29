#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PostEffectCopy.generated.h"

class UCopySceneTextureComponent;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API APostEffectCopy : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCopySceneTextureComponent* CopySceneTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RenderTexture;
    
    APostEffectCopy(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SampleShaderComponent.generated.h"

class UTextureRenderTarget2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MACANSHADERS_API USampleShaderComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RenderTexture;
    
    USampleShaderComponent(const FObjectInitializer& ObjectInitializer);

};


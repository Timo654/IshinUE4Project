#pragma once
#include "CoreMinimal.h"
#include "Engine/TextureRenderTarget2D.h"
#include "RWTextureRenderTarget2D.generated.h"

UCLASS(Blueprintable)
class MACANSHADERS_API URWTextureRenderTarget2D : public UTextureRenderTarget2D {
    GENERATED_BODY()
public:
    URWTextureRenderTarget2D();

};


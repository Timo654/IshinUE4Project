#include "PostEffectCopy.h"

APostEffectCopy::APostEffectCopy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CopySceneTexture = NULL;
    this->RenderTexture = NULL;
}



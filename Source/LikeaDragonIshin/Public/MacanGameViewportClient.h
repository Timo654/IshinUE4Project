#pragma once
#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "MacanGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class UMacanGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    UMacanGameViewportClient();

};


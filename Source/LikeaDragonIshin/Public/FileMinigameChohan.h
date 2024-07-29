#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ChohanVoiceData.h"
#include "EChohanBakutoSerifu.h"
#include "FileMinigameChohan.generated.h"

UCLASS(Blueprintable)
class AFileMinigameChohan : public AActor {
    GENERATED_BODY()
public:
    AFileMinigameChohan(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FChohanVoiceData GetBakutoVoiceData(int32 CharaTypeId, EChohanBakutoSerifu eType);
    
};


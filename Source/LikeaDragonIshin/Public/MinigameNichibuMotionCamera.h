#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "MinigameNichibuMotionCamera.generated.h"

class ALevelSequenceActor;
class ULevelSequencePlayer;

UCLASS(Blueprintable)
class AMinigameNichibuMotionCamera : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath m_cameraSequencerPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* m_cameraSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* m_sequencePlayer;
    
public:
    AMinigameNichibuMotionCamera(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnPlayFinishSequence();
    
    UFUNCTION(BlueprintCallable)
    void LoadFinishSequence();
    
    UFUNCTION(BlueprintCallable)
    void LoadCameraMotion(FSoftObjectPath FilePath);
    
};


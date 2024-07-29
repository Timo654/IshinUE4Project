#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HumanSoundComponent.generated.h"

class ADevil2Human;
class UCueObject;
class USoundAtomCue;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UHumanSoundComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADevil2Human* OwnerHuman;
    
public:
    UHumanSoundComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnLoadDramaScanner();
    
    UFUNCTION(BlueprintCallable)
    void StopDramaScanner();
    
    UFUNCTION(BlueprintCallable)
    void SetTimeDramaScanner(float Time, float Delay);
    
    UFUNCTION(BlueprintCallable)
    void RequestDramaScanner(const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseExpression();
    
    UFUNCTION(BlueprintCallable)
    UCueObject* PrepareAndPlayVoice(USoundAtomCue* Cue, bool ignore_pos);
    
    UFUNCTION(BlueprintCallable)
    void LoadDramaScanner(const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    bool IsLoadedDramaScanner(const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    bool IsExpressionPlaying();
    
    UFUNCTION(BlueprintCallable)
    bool IsExpressionPlayerPlaying();
    
    UFUNCTION(BlueprintCallable)
    bool IsDramaScannerPlaying();
    
    UFUNCTION(BlueprintCallable)
    void FinishExpression();
    
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "CueObject.generated.h"

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UCueObject : public UObject {
    GENERATED_BODY()
public:
    UCueObject();

    UFUNCTION(BlueprintCallable)
    void Stop(bool is_immediate);
    
    UFUNCTION(BlueprintCallable)
    void SetVolume(float vol);
    
    UFUNCTION(BlueprintCallable)
    void SetSpeedRatio(float freq_ratio);
    
    UFUNCTION(BlueprintCallable)
    void SetPos(FVector v_pos);
    
    UFUNCTION(BlueprintCallable)
    void SetPanCh(int32 ch, float pan);
    
    UFUNCTION(BlueprintCallable)
    void SetPan(float pan);
    
    UFUNCTION(BlueprintCallable)
    void Resume();
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable)
    void Pause();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRequestOrPlaying() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsPrepared();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying(bool is_true_if_preparing) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalFrames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPos() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayTimemMillisecond() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayFrame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentSecond() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentSample() const;
    
};


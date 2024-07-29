#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/EngineSubsystem.h"
#include "VoiceIDList.h"
#include "VoicerIDList.h"
#include "SoundEngineSubsystem.generated.h"

class UCueObject;
class UCueSheetObject;
class UDataTable;
class USoundAtomCue;
class USoundAtomCueSheet;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API USoundEngineSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_pCueSheetNameIDTable;
    
public:
    USoundEngineSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnloadCuesheetByCue(USoundAtomCue* Cue);
    
    UFUNCTION(BlueprintCallable)
    void UnloadCuesheet(USoundAtomCueSheet* CueSheet);
    
    UFUNCTION(BlueprintCallable)
    UCueObject* PrepareCue(USoundAtomCue* Cue, float SeekSec);
    
    UFUNCTION(BlueprintCallable)
    void PlayCueLabel3D(FVoiceIDList ID, FVoicerIDList voicer, UPARAM(Ref) FVector& Pos, float SeekSec);
    
    UFUNCTION(BlueprintCallable)
    void PlayCueLabel2D(FVoiceIDList ID, FVoicerIDList voicer, float SeekSec);
    
    UFUNCTION(BlueprintCallable)
    void PlayCue3D(USoundAtomCue* Cue, UPARAM(Ref) FVector& Pos, float SeekSec);
    
    UFUNCTION(BlueprintCallable)
    void PlayCue2D(USoundAtomCue* Cue, float SeekSec);
    
    UFUNCTION(BlueprintCallable)
    UCueObject* PlayAndSpwanCue3D(USoundAtomCue* Cue, UPARAM(Ref) FVector& Pos, float SeekSec);
    
    UFUNCTION(BlueprintCallable)
    UCueObject* PlayAndSpwanCue2D(USoundAtomCue* Cue, float SeekSec);
    
    UFUNCTION(BlueprintCallable)
    UCueSheetObject* LoadCuesheetByCue(USoundAtomCue* Cue);
    
    UFUNCTION(BlueprintCallable)
    UCueSheetObject* LoadCuesheet(USoundAtomCueSheet* CueSheet);
    
    UFUNCTION(BlueprintCallable)
    bool IsCuesheetLoadedByCue(USoundAtomCue* Cue);
    
    UFUNCTION(BlueprintCallable)
    bool IsCuesheetLoaded(USoundAtomCueSheet* CueSheet);
    
    UFUNCTION(BlueprintCallable)
    int32 AtomCueToSEID(USoundAtomCue* Cue);
    
};


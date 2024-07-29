#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActionBase.h"
#include "VoiceIDList.h"
#include "VoicerIDList.h"
#include "ActionSoundFrontEnd.generated.h"

class UCueObject;
class UCueSheetObject;
class UDataTable;
class USoundAtomCue;
class USoundAtomCueSheet;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API AActionSoundFrontEnd : public AActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_pCueNameIDTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_pCueSheetNameIDTable;
    
public:
    AActionSoundFrontEnd(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnloadCuesheet(USoundAtomCueSheet* CueSheet);
    
    UFUNCTION(BlueprintCallable)
    void PlayCueLabel3D(FVoiceIDList ID, FVoicerIDList voicer, UPARAM(Ref) FVector& Pos, float SeekSec);
    
    UFUNCTION(BlueprintCallable)
    void PlayCueLabel2D(FVoiceIDList ID, FVoicerIDList voicer, float SeekSec);
    
    UFUNCTION(BlueprintCallable)
    void PlayCue3D(USoundAtomCue* pCue, UPARAM(Ref) FVector& Pos, float SeekSec);
    
    UFUNCTION(BlueprintCallable)
    void PlayCue2D(USoundAtomCue* pCue, float SeekSec);
    
    UFUNCTION(BlueprintCallable)
    UCueObject* PlayAndSpwanCue2D(USoundAtomCue* pCue, float SeekSec);
    
    UFUNCTION(BlueprintCallable)
    UCueSheetObject* LoadCuesheet(USoundAtomCueSheet* CueSheet);
    
    UFUNCTION(BlueprintCallable)
    bool IsCuesheetLoaded(USoundAtomCueSheet* CueSheet);
    
};


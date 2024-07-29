#include "SoundEngineSubsystem.h"

USoundEngineSubsystem::USoundEngineSubsystem() {
    this->m_pCueSheetNameIDTable = NULL;
}

void USoundEngineSubsystem::UnloadCuesheetByCue(USoundAtomCue* Cue) {
}

void USoundEngineSubsystem::UnloadCuesheet(USoundAtomCueSheet* CueSheet) {
}

UCueObject* USoundEngineSubsystem::PrepareCue(USoundAtomCue* Cue, float SeekSec) {
    return NULL;
}

void USoundEngineSubsystem::PlayCueLabel3D(FVoiceIDList ID, FVoicerIDList voicer, FVector& Pos, float SeekSec) {
}

void USoundEngineSubsystem::PlayCueLabel2D(FVoiceIDList ID, FVoicerIDList voicer, float SeekSec) {
}

void USoundEngineSubsystem::PlayCue3D(USoundAtomCue* Cue, FVector& Pos, float SeekSec) {
}

void USoundEngineSubsystem::PlayCue2D(USoundAtomCue* Cue, float SeekSec) {
}

UCueObject* USoundEngineSubsystem::PlayAndSpwanCue3D(USoundAtomCue* Cue, FVector& Pos, float SeekSec) {
    return NULL;
}

UCueObject* USoundEngineSubsystem::PlayAndSpwanCue2D(USoundAtomCue* Cue, float SeekSec) {
    return NULL;
}

UCueSheetObject* USoundEngineSubsystem::LoadCuesheetByCue(USoundAtomCue* Cue) {
    return NULL;
}

UCueSheetObject* USoundEngineSubsystem::LoadCuesheet(USoundAtomCueSheet* CueSheet) {
    return NULL;
}

bool USoundEngineSubsystem::IsCuesheetLoadedByCue(USoundAtomCue* Cue) {
    return false;
}

bool USoundEngineSubsystem::IsCuesheetLoaded(USoundAtomCueSheet* CueSheet) {
    return false;
}

int32 USoundEngineSubsystem::AtomCueToSEID(USoundAtomCue* Cue) {
    return 0;
}



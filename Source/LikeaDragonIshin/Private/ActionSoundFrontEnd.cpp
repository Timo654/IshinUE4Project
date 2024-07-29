#include "ActionSoundFrontEnd.h"

AActionSoundFrontEnd::AActionSoundFrontEnd(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pCueNameIDTable = NULL;
    this->m_pCueSheetNameIDTable = NULL;
}

void AActionSoundFrontEnd::UnloadCuesheet(USoundAtomCueSheet* CueSheet) {
}

void AActionSoundFrontEnd::PlayCueLabel3D(FVoiceIDList ID, FVoicerIDList voicer, FVector& Pos, float SeekSec) {
}

void AActionSoundFrontEnd::PlayCueLabel2D(FVoiceIDList ID, FVoicerIDList voicer, float SeekSec) {
}

void AActionSoundFrontEnd::PlayCue3D(USoundAtomCue* pCue, FVector& Pos, float SeekSec) {
}

void AActionSoundFrontEnd::PlayCue2D(USoundAtomCue* pCue, float SeekSec) {
}

UCueObject* AActionSoundFrontEnd::PlayAndSpwanCue2D(USoundAtomCue* pCue, float SeekSec) {
    return NULL;
}

UCueSheetObject* AActionSoundFrontEnd::LoadCuesheet(USoundAtomCueSheet* CueSheet) {
    return NULL;
}

bool AActionSoundFrontEnd::IsCuesheetLoaded(USoundAtomCueSheet* CueSheet) {
    return false;
}



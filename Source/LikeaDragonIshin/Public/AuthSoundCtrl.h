#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AuthSoundCtrl.generated.h"

class UCueObject;
class UCueSheetObject;
class UDataTable;
class USoundAtomCue;
class USoundAtomCueSheet;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UAuthSoundCtrl : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_pAuthCueIDTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* m_SoundAtomCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* m_SoundAtomCuesheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCueSheetObject* m_CuesheetObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCueObject* m_CueObj;
    
public:
    UAuthSoundCtrl();

};


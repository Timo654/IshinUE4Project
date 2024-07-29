#pragma once
#include "CoreMinimal.h"
#include "ActionMinigame.h"
#include "ActionMiniKaraoke.generated.h"

class AMinigameKaraokeCameraMotion;
class AMinigameKaraokeLyric;
class UDataTable;
class UInputDeviceListener;
class UMacanUserWidget_MngKaraokeLine;

UCLASS(Blueprintable)
class UActionMiniKaraoke : public UActionMinigame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMinigameKaraokeCameraMotion* m_pKaraokeCameraMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_pInputListenerFlashback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMinigameKaraokeLyric* m_pKaraokeLyric;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_pKaraokeMusicTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMacanUserWidget_MngKaraokeLine*> m_pKaraokeLine;
    
public:
    UActionMiniKaraoke();

};


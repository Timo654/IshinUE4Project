#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MinigameKaraokeLyric.generated.h"

class UInputDeviceListener;
class UMUW_MngKaraokeTimingBar;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API AMinigameKaraokeLyric : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_pInputListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMUW_MngKaraokeTimingBar* m_pTimingBar;
    
public:
    AMinigameKaraokeLyric(const FObjectInitializer& ObjectInitializer);

};


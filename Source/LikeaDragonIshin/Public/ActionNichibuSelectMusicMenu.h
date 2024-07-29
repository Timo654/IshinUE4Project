#pragma once
#include "CoreMinimal.h"
#include "ActionMinigame.h"
#include "ActionNichibuSelectMusicMenu.generated.h"

class UInputDeviceListener;

UCLASS(Blueprintable)
class UActionNichibuSelectMusicMenu : public UActionMinigame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_pInputListener;
    
public:
    UActionNichibuSelectMusicMenu();

};


#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionTutorialManager.generated.h"

class UInputDeviceListener;
class UMacanUIDataTipsPopup;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UActionTutorialManager : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIDataTipsPopup* m_pTipsPopupUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_plistener;
    
public:
    UActionTutorialManager();

};


#pragma once
#include "CoreMinimal.h"
#include "ActionMinigame.h"
#include "ActionMahjong.generated.h"

class AMahjongModelManager;
class UInputDeviceListener;
class UMacanUIDataMahjong;
class UMacanUIDataWandererSpeechBubble;
class UUIManager;

UCLASS(Blueprintable)
class UActionMahjong : public UActionMinigame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* pListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* pDebugListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIDataMahjong* UIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIManager* pUIManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMahjongModelManager* ModelManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIDataWandererSpeechBubble* PopupWindowUIData_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIDataWandererSpeechBubble* PopupWindowUIData_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIDataWandererSpeechBubble* PopupWindowUIData_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIDataWandererSpeechBubble* PopupWindowUIData_4;
    
    UActionMahjong();

};


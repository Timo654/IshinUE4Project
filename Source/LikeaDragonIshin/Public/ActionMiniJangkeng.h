#pragma once
#include "CoreMinimal.h"
#include "ActionMinigame.h"
#include "ActionMiniJangkeng.generated.h"

class UInputDeviceListener;
class UMacanUIDataJangkeng;
class UUIManager;

UCLASS(Blueprintable)
class UActionMiniJangkeng : public UActionMinigame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIDataJangkeng* UIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIManager* pUIManager;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_listener;
    
public:
    UActionMiniJangkeng();

};


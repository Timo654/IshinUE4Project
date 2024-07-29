#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionTitle.generated.h"

class UInputDeviceListener;
class UMacanUIInfo;

UCLASS(Blueprintable)
class UActionTitle : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_listener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMacanUIInfo* m_pInfoGamerTag;
    
public:
    UActionTitle();

};


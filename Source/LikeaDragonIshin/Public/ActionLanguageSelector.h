#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionLanguageSelector.generated.h"

class UInputDeviceListener;
class UMacanUIDataWindowChoice;
class UMacanUIInfo;

UCLASS(Blueprintable)
class UActionLanguageSelector : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_plistener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMacanUIDataWindowChoice* m_pChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMacanUIInfo* m_pInfoChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMacanUIInfo* m_pInfoGamerTag;
    
public:
    UActionLanguageSelector();

};


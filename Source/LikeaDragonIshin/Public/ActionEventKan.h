#pragma once
#include "CoreMinimal.h"
#include "ActionObjectInputDeviceBase.h"
#include "ActionEventKan.generated.h"

class UMacanUserWidgetOtherStaffRollEnd;

UCLASS(Blueprintable)
class UActionEventKan : public UActionObjectInputDeviceBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidgetOtherStaffRollEnd* m_ui;
    
public:
    UActionEventKan();

};


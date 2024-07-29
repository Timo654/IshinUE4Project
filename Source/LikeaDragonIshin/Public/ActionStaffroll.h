#pragma once
#include "CoreMinimal.h"
#include "ActionBase.h"
#include "ActionStaffroll.generated.h"

class UStaffrollMacanUserWidget;

UCLASS(Blueprintable)
class AActionStaffroll : public AActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaffrollMacanUserWidget* Widget;
    
    AActionStaffroll(const FObjectInitializer& ObjectInitializer);

};


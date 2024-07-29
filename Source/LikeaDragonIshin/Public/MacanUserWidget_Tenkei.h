#pragma once
#include "CoreMinimal.h"
#include "EUITenkeiType.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_Tenkei.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_Tenkei : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_Tenkei();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UpdateAnimSec(float inSec);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetupAnim(EUITenkeiType inType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEndAnim();
    
};


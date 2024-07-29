#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_MgFishing.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_MgFishing : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_MgFishing();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Insert_Hyouka();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetProjection_v(FVector V);
    
};


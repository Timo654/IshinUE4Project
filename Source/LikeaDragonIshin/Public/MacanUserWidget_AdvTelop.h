#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_AdvTelop.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_AdvTelop : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_AdvTelop();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UpdateString(UPARAM(Ref) FString& inString);
    
};


#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UserWidget_Loading.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UUserWidget_Loading : public UUserWidget {
    GENERATED_BODY()
public:
    UUserWidget_Loading();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetProgress(float progress);
    
};


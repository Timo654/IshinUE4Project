#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_SimpleProgressBar.generated.h"

class UProgressBar;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_SimpleProgressBar : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* progress_bar;
    
    UMacanUserWidget_SimpleProgressBar();

    UFUNCTION(BlueprintCallable)
    void SetProgress(float Val);
    
};


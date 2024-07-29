#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_BtnIcons.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BtnIcons : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isUsedAlternativeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isUsedAlternativeTextNotColon;
    
    UMacanUserWidget_BtnIcons();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SelfRefreshBtnIcon();
    
};


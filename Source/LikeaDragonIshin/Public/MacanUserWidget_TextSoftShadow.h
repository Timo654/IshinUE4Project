#pragma once
#include "CoreMinimal.h"
#include "Fonts/SlateFontInfo.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_TextSoftShadow.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TextSoftShadow : public UMacanUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo nowFont;
    
public:
    UMacanUserWidget_TextSoftShadow();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSoftShadow();
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateSystemFont(FName InName);
    
};


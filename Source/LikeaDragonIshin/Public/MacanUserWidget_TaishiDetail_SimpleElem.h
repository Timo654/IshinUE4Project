#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_TaishiDetail_SimpleElem.generated.h"

class UMacanTextBlock;
class UProgressBar;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiDetail_SimpleElem : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* elem_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* elem_switcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* elem_progressbar;
    
    UMacanUserWidget_TaishiDetail_SimpleElem();

    UFUNCTION(BlueprintCallable)
    void SetText(const FText& text);
    
    UFUNCTION(BlueprintCallable)
    void setSwitcher(int32 idx);
    
    UFUNCTION(BlueprintCallable)
    void SetProgress(float Val);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 getSwitcher() const;
    
};


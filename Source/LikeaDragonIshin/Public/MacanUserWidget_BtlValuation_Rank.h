#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_BtlValuation_Rank.generated.h"

class UBorder;
class UMacanUserWidget_SimpleSwitcher;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BtlValuation_Rank : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* color_border;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_SimpleSwitcher* elem_rank_prev;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_SimpleSwitcher* elem_rank_new;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* default_anim;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLinearColor> ColorList;
    
public:
    UMacanUserWidget_BtlValuation_Rank();

    UFUNCTION(BlueprintCallable)
    void OnChangeLvEvent();
    
};


#pragma once
#include "CoreMinimal.h"
#include "ETaishiFilter.h"
#include "ETaishiSort.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_TaishiElem_Filter.generated.h"

class UMacanTextBlock;
class UMacanUserWidget_FilterTab;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiElem_Filter : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* elemBtnFilterLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* elemBtnFilterRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* elemFilterText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<ETaishiFilter, UMacanUserWidget_FilterTab*> FilterIconMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* elemBtnSortLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* elemBtnSortRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* elemSortText;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETaishiFilter, FText> FilterNameMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETaishiSort, FText> SortNameMap;
    
public:
    UMacanUserWidget_TaishiElem_Filter();

};


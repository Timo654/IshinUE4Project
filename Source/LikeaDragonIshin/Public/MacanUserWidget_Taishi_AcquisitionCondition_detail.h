#pragma once
#include "CoreMinimal.h"
#include "ETaishiRarity.h"
#include "ETaishiType.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_Taishi_AcquisitionCondition_detail.generated.h"

class UImage;
class UMacanListView;
class UMacanTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_Taishi_AcquisitionCondition_detail : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanListView* elem_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* elem_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* elem_arrow_top;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* elem_arrow_bottom;
    
    UMacanUserWidget_Taishi_AcquisitionCondition_detail();

    UFUNCTION(BlueprintCallable)
    void setupAfter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 getSelectableMax() const;
    
    UFUNCTION(BlueprintCallable)
    void addItemForBP(bool inPossession, ETaishiType _type, ETaishiRarity _rarity, const FText& _name);
    
};


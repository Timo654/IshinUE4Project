#pragma once
#include "CoreMinimal.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "ETaishiRarity.h"
#include "ETaishiType.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_Taishi_AcquisitionCondition_item.generated.h"

class UMacanTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_Taishi_AcquisitionCondition_item : public UMacanUserWidget, public IUserObjectListEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* rarity_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* type_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* elem_check;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* name_text;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETaishiRarity, FText> RarityTextDic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETaishiType, FText> TypeTextDic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UnknownNameText;
    
public:
    UMacanUserWidget_Taishi_AcquisitionCondition_item();


    // Fix for true pure virtual functions not being implemented
};


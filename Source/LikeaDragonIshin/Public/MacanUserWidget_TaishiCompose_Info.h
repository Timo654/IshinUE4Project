#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget_TaishiCompose_Base.h"
#include "Templates/SubclassOf.h"
#include "MacanUserWidget_TaishiCompose_Info.generated.h"

class UHorizontalBox;
class UMacanUserWidget_TaishiDetail_DetailMini;
class UMacanUserWidget_TaishiOrganizeCard;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiCompose_Info : public UMacanUserWidget_TaishiCompose_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiDetail_DetailMini* elem_detail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* card_box;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMacanUserWidget_TaishiOrganizeCard> wbp_card_widget;
    
    UMacanUserWidget_TaishiCompose_Info();

};


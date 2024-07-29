#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget_TaishiOrganizeBase.h"
#include "Templates/SubclassOf.h"
#include "MacanUserWidget_TaishiOrganizeTeamOrganize.generated.h"

class UMacanScrollBox;
class UMacanUserWidget_TaishiElem_Arrow;
class UMacanUserWidget_TaishiOrganizeTeamContainer;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiOrganizeTeamOrganize : public UMacanUserWidget_TaishiOrganizeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanScrollBox* scroll_box;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMacanUserWidget_TaishiOrganizeTeamContainer> wbp_list_item_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiElem_Arrow* elem_arrow;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMacanUserWidget_TaishiOrganizeTeamContainer*> item_list;
    
public:
    UMacanUserWidget_TaishiOrganizeTeamOrganize();

};


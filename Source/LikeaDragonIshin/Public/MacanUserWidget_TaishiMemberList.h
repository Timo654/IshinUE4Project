#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "MacanUserWidget_TaishiOrganizeBase.h"
#include "Templates/SubclassOf.h"
#include "MacanUserWidget_TaishiMemberList.generated.h"

class UMacanScrollBox;
class UMacanTextBlock;
class UMacanUserWidget_TaishiElem_Arrow;
class UMacanUserWidget_TaishiMemberListItem;
class UMacanUserWidget_TaishiOrganizeCardCursor;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiMemberList : public UMacanUserWidget_TaishiOrganizeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanScrollBox* scroll_box;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMacanUserWidget_TaishiOrganizeCardCursor> wbp_card_cursor_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMacanUserWidget_TaishiMemberListItem> wbp_list_item_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiElem_Arrow* elem_arrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* elem_cardNumMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* elem_cardNumNow;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 num_max_initial_card_lists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 card_create_unit_count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 card_replacement_unit_count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin ListPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiOrganizeCardCursor* card_cursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMacanUserWidget_TaishiMemberListItem*> item_list;
    
public:
    UMacanUserWidget_TaishiMemberList();

};


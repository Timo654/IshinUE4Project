#pragma once
#include "CoreMinimal.h"
#include "EMMTAISHIMENU_BTN_GUIDE_DEFINE_TABLE.h"
#include "EMMTAISHIMENU_DEFINE_TABLE.h"
#include "EMMTAISHIMENU_INFOTEXT_DEFINE_TABLE.h"
#include "EMMTAISHIMENU_REINFORCECOMMENT_TEXT_DEFINE_TABLE.h"
#include "MacanUserWidget.h"
#include "TaishiMenuOrganizeInsertionWidgetData.h"
#include "TaishiMenuOrganizeInsertionWidgetItemData.h"
#include "UIBtnGuideItemData.h"
#include "MacanUserWidget_TaishiMenuOrganize.generated.h"

class UActionSoldierDeckBuild;
class UMacanUserWidget_BtlMainLife;
class UMacanUserWidget_BtnGuideSimpleH;
class UMacanUserWidget_CardMain;
class UMacanUserWidget_TaishiCompose_Info;
class UMacanUserWidget_TaishiCompose_Top;
class UMacanUserWidget_TaishiDetail_Top;
class UMacanUserWidget_TaishiElemBase;
class UMacanUserWidget_TaishiElemOrganizeBG;
class UMacanUserWidget_TaishiElemVList;
class UMacanUserWidget_TaishiElem_Filter;
class UMacanUserWidget_TaishiElem_InforceList_Info;
class UMacanUserWidget_TaishiElem_InforceList_List;
class UMacanUserWidget_TaishiMemberList;
class UMacanUserWidget_TaishiOrganizeAutoSkillSelect;
class UMacanUserWidget_TaishiOrganizeBase;
class UMacanUserWidget_TaishiOrganizeCard;
class UMacanUserWidget_TaishiOrganizeTeamAssign;
class UMacanUserWidget_TaishiOrganizeTeamImpl;
class UMacanUserWidget_TaishiOrganizeTeamOrganize;
class UMacanUserWidget_TaishiReincarnation;
class UMacanUserWidget_TaishiReinforcePerform;
class UMacanUserWidget_TaishiYesNo_window;
class UOverlay;
class UTaishiMenuOrganizeWidgetManager;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiMenuOrganize : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtnGuideSimpleH* elem_btn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiOrganizeBase* elem_bg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiElemOrganizeBG* elem_base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiYesNo_window* yesno_window;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlMainLife* life_gauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiElemVList* top_menu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiElemBase* top_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiOrganizeTeamAssign* team_assign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiOrganizeTeamOrganize* team_organize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiMemberList* member_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiElem_Filter* member_sort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiDetail_Top* member_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiElemBase* compose_btn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiElemBase* compose_confirm_bg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiCompose_Info* compose_confirm_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiYesNo_window* compose_confirm_window;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiCompose_Top* compose_perform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiElemBase* specific_reinforce_bg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiElem_InforceList_List* specific_reinforce_weapon_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiElem_InforceList_Info* specific_reinforce_weapon_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiReinforcePerform* specific_reinforce_perform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiReincarnation* reincarnation_confirm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiReinforcePerform* reincarnation_perform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiOrganizeAutoSkillSelect* auto_skill_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* InsertPoint_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* InsertPoint_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* InsertPoint_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* InsertPoint_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* InsertPoint_4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* InsertPoint_5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* InsertPoint_6;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* InsertPoint_7;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* InsertPoint_8;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* InsertPoint_9;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* InsertPoint_10;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UOverlay*> insert_point_array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTaishiMenuOrganizeWidgetManager* widget_manager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTaishiMenuOrganizeInsertionWidgetData> InsertionWidgetDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTaishiMenuOrganizeInsertionWidgetItemData> InsertionWidgetItemDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMMTAISHIMENU_BTN_GUIDE_DEFINE_TABLE, FUIBtnGuideItemData> BtnGuideDefineMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMMTAISHIMENU_DEFINE_TABLE, FText> MenuInfoTextMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMMTAISHIMENU_INFOTEXT_DEFINE_TABLE, FText> MenuDetailInfoTextMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMMTAISHIMENU_REINFORCECOMMENT_TEXT_DEFINE_TABLE, FText> ReinforceCommentTextMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiOrganizeTeamImpl* selected_team_impl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_CardMain* selected_card;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMacanUserWidget_TaishiOrganizeCard*> selectedCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActionSoldierDeckBuild* Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 compose_selectable_card_max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText text_dismiss_confirm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText text_reinforce_confirm;
    
public:
    UMacanUserWidget_TaishiMenuOrganize();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void postInsert_elem_btn();
    
public:
    UFUNCTION(BlueprintCallable)
    void on();
    
    UFUNCTION(BlueprintCallable)
    void off();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isFocus() const;
    
};


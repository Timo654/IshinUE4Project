#pragma once
#include "CoreMinimal.h"
#include "EMMTAISHISORTIEMENU_DEFINE_TABLE.h"
#include "EMMTAISHISORTIE_BTN_GUIDE_DEFINE_TABLE.h"
#include "MacanUserWidget.h"
#include "UIBtnGuideItemData.h"
#include "MacanUserWidget_TaishiMenuSortie.generated.h"

class UMacanUserWidget_BtnGuideSimpleH;
class UMacanUserWidget_TaishiElemBase;
class UMacanUserWidget_TaishiElemMissionList;
class UMacanUserWidget_TaishiElemOrganizeBG;
class UMacanUserWidget_TaishiElem_LocationInfo;
class UMacanUserWidget_TaishiElem_MissionInfo;
class UMacanUserWidget_TaishiElem_MissionInfoItem;
class UMacanUserWidget_TaishiSortieElemLocList;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiMenuSortie : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiElemBase* elem_title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiElemOrganizeBG* elem_base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiElemBase* elem_infotext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiSortieElemLocList* location_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiElem_LocationInfo* location_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiElemMissionList* mission_listview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiElem_MissionInfo* mission_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiElem_MissionInfoItem* mission_item_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtnGuideSimpleH* elem_btn;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMMTAISHISORTIEMENU_DEFINE_TABLE, FText> MenuInfoTextMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMMTAISHISORTIE_BTN_GUIDE_DEFINE_TABLE, FUIBtnGuideItemData> BtnGuideDefineMap;
    
public:
    UMacanUserWidget_TaishiMenuSortie();

    UFUNCTION(BlueprintCallable)
    void regist_mission(int32 Location, int32 mission, const FText& Name, float difficulty, bool isNew, bool isCleared, const TArray<FText>& _item_list, int32 reward_money, bool is_open);
    
    UFUNCTION(BlueprintCallable)
    void on();
    
    UFUNCTION(BlueprintCallable)
    void off();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isFocus() const;
    
    UFUNCTION(BlueprintCallable)
    void getSelection(int32& Location, int32& mission);
    
};


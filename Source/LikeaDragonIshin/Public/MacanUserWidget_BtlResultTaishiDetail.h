#pragma once
#include "CoreMinimal.h"
#include "EBTL_RESULT_DETAIL_BTN_GUIDE_DEFINE_TABLE.h"
#include "MacanUserWidget.h"
#include "Templates/SubclassOf.h"
#include "UIBtnGuideItemData.h"
#include "MacanUserWidget_BtlResultTaishiDetail.generated.h"

class UMacanUserWidget_BtnGuideSimpleH;
class UMacanUserWidget_TaishiDetail_Place;
class UMacanUserWidget_TaishiOrganizeCardCursor;
class UMacanUserWidget_TaishiOrganizeTeamContainer;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BtlResultTaishiDetail : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<int32, UMacanUserWidget_TaishiOrganizeTeamContainer*> TeamContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiDetail_Place* perform_place;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* effect_lvup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtnGuideSimpleH* elem_btn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMacanUserWidget_TaishiOrganizeCardCursor> wbp_card_cursor_class;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiOrganizeCardCursor* card_cursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IN_TIMER_MILLISECOND;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float exp_gauge_speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBTL_RESULT_DETAIL_BTN_GUIDE_DEFINE_TABLE, FUIBtnGuideItemData> BtnGuideDefineMap;
    
public:
    UMacanUserWidget_BtlResultTaishiDetail();

};


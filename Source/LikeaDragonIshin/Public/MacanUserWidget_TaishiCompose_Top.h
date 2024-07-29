#pragma once
#include "CoreMinimal.h"
#include "ComposeMaterialDataStruct.h"
#include "EMMTAISHI_COMPOSE_BTN_GUIDE_DEFINE_TABLE.h"
#include "MacanUserWidget.h"
#include "UIBtnGuideItemData.h"
#include "MacanUserWidget_TaishiCompose_Top.generated.h"

class UMacanUserWidget_BtnGuideSimpleH;
class UMacanUserWidget_CardMain;
class UMacanUserWidget_TaishiCompose_Base;
class UMacanUserWidget_TaishiDetail_Place;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiCompose_Top : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiCompose_Base* elem_back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiDetail_Place* card_place;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* effect_lvup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiCompose_Base* elem_pos_card;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_CardMain* target_card;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMacanUserWidget_CardMain*> ingredient_cards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiCompose_Base* effect_front;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtnGuideSimpleH* elem_btn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMacanUserWidget_TaishiCompose_Base*> effect_success;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMMTAISHI_COMPOSE_BTN_GUIDE_DEFINE_TABLE, FUIBtnGuideItemData> BtnGuideDefineMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WAIT_TIMER;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WAIT_DELAY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LVUP_DELAY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float exp_gauge_speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FComposeMaterialDataStruct> material_array;
    
public:
    UMacanUserWidget_TaishiCompose_Top();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnd() const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "EMMTAISHIRECRUIT_BTN_GUIDE_DEFINE_TABLE.h"
#include "MacanUserWidget.h"
#include "UIBtnGuideItemData.h"
#include "MacanUserWidget_TaishiMenuRecruit.generated.h"

class UActionSoldierMenuRecruit;
class UMacanUserWidget_BtnGuideSimpleH;
class UMacanUserWidget_TaishiElemBase;
class UMacanUserWidget_TaishiElemOrganizeBG;
class UMacanUserWidget_TaishiRecruit_Info;
class UMacanUserWidget_TaishiRecruit_Top;
class UMacanUserWidget_TaishiRecruit_VList;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiMenuRecruit : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiElemBase* elem_title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiElemOrganizeBG* elem_base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiElemBase* elem_info_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiRecruit_VList* elem_page;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiRecruit_Info* elem_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiElemBase* elem_effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtnGuideSimpleH* elem_btn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiRecruit_Top* perform;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMMTAISHIRECRUIT_BTN_GUIDE_DEFINE_TABLE, FUIBtnGuideItemData> BtnGuideDefineMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActionSoldierMenuRecruit* Action;
    
public:
    UMacanUserWidget_TaishiMenuRecruit();

    UFUNCTION(BlueprintCallable)
    void on();
    
    UFUNCTION(BlueprintCallable)
    void off();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isFocus() const;
    
};


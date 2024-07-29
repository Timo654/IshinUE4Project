#pragma once
#include "CoreMinimal.h"
#include "EMMTAISHITOPMENU_DEFINE_TABLE.h"
#include "EMMTAISHITOP_BTN_GUIDE_DEFINE_TABLE.h"
#include "MacanUserWidget.h"
#include "UIBtnGuideItemData.h"
#include "MacanUserWidget_TaishiMenuTop.generated.h"

class UMacanUserWidget_BtnGuideSimpleH;
class UMacanUserWidget_TaishiElemBase;
class UMacanUserWidget_TaishiElemVList;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiMenuTop : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiElemVList* elem_menu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiElemBase* elem_bg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiElemBase* elem_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtnGuideSimpleH* elem_btn;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMMTAISHITOP_BTN_GUIDE_DEFINE_TABLE, FUIBtnGuideItemData> BtnGuideDefineMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMMTAISHITOPMENU_DEFINE_TABLE, FText> MenuInfoTextMap;
    
public:
    UMacanUserWidget_TaishiMenuTop();

    UFUNCTION(BlueprintCallable)
    void on(int32 init_sel);
    
    UFUNCTION(BlueprintCallable)
    void offBG();
    
    UFUNCTION(BlueprintCallable)
    void off();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isDestable() const;
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 getSelectionIndex() const;
    
};


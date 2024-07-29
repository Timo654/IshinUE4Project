#pragma once
#include "CoreMinimal.h"
#include "BtlResultData.h"
#include "EBTL_RESULT_MAIN_BTN_GUIDE_DEFINE_TABLE.h"
#include "MacanUserWidget.h"
#include "UIBtnGuideItemData.h"
#include "MacanUserWidget_BtlResultMain.generated.h"

class UMacanUserWidget_BtlResultBase;
class UMacanUserWidget_BtlResultCardSlot;
class UMacanUserWidget_BtlResultExp;
class UMacanUserWidget_BtlResultRank;
class UMacanUserWidget_BtlResultTaishiDetail;
class UMacanUserWidget_BtnGuideSimpleH;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BtlResultMain : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlResultBase* bg_elem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlResultBase* rank_effect_B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlResultRank* rank_elem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlResultBase* reward_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlResultBase* rank_leage0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlResultBase* rank_leage1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlResultBase* rankup_effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlResultExp* exp_elem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlResultExp* exp_money_elem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlResultBase* rank_effect_T;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlResultCardSlot* card_slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlResultTaishiDetail* taishi_detail_screen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtnGuideSimpleH* elem_btn;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBTL_RESULT_MAIN_BTN_GUIDE_DEFINE_TABLE, FUIBtnGuideItemData> BtnGuideDefineMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlResultData res_data;
    
public:
    UMacanUserWidget_BtlResultMain();

    UFUNCTION(BlueprintCallable)
    void showBtnGuide();
    
    UFUNCTION(BlueprintCallable)
    void scrollTaishi(int32 Delta);
    
    UFUNCTION(BlueprintCallable)
    void Play(const FBtlResultData& result_data);
    
    UFUNCTION(BlueprintCallable)
    void openTaishiDetail();
    
    UFUNCTION(BlueprintCallable)
    void Next();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isShowBtnGuide() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDispTaishiDetail() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isDestable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAbleOpenTaishiDetail() const;
    
    UFUNCTION(BlueprintCallable)
    void hideBtnGuide();
    
};


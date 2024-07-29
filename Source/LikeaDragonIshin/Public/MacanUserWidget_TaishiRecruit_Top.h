#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "TaishiCardDataDetail.h"
#include "MacanUserWidget_TaishiRecruit_Top.generated.h"

class UMacanUserWidget_BtnGuideSimpleH;
class UMacanUserWidget_TaishiDetail_Place;
class UMacanUserWidget_TaishiRecruit_Base;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiRecruit_Top : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiRecruit_Base* effect_Back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiDetail_Place* card_place;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiRecruit_Base* effect_front;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiRecruit_Base* effect_bg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMacanUserWidget*> effect_lv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiRecruit_Base* elem_success;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtnGuideSimpleH* elem_btn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WAIT_SUCCESS_TIMER;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText decideText;
    
public:
    UMacanUserWidget_TaishiRecruit_Top();

    UFUNCTION(BlueprintCallable)
    void on(int32 _Lv, const FTaishiCardDataDetail& taishi_detail);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnd() const;
    
};


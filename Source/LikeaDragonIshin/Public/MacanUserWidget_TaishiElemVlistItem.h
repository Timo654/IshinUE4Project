#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget_TaishiElemBase.h"
#include "MacanUserWidget_TaishiElemVlistItem.generated.h"

class UMacanUserWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiElemVlistItem : public UMacanUserWidget_TaishiElemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* focus_in_anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* focus_stay_anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* focus_out_anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* normal_anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* disable_anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* decide_anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* elem_new_icon;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* playing_anim;
    
public:
    UMacanUserWidget_TaishiElemVlistItem();

};


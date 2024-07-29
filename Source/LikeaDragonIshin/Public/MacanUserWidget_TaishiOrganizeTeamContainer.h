#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget_TaishiOrganizeBase.h"
#include "MacanUserWidget_TaishiOrganizeTeamContainer.generated.h"

class UMacanUserWidget;
class UMacanUserWidget_SimpleTextBlock;
class UMacanUserWidget_TaishiOrganizeTeamImpl;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiOrganizeTeamContainer : public UMacanUserWidget_TaishiOrganizeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiOrganizeTeamImpl* card_impl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* state_disable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_SimpleTextBlock* state_special;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* normal_anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* focus_anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* decide_anim;
    
    UMacanUserWidget_TaishiOrganizeTeamContainer();

};


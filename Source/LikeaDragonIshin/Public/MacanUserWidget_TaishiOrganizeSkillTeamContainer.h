#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget_TaishiOrganizeTeamContainer.h"
#include "MacanUserWidget_TaishiOrganizeSkillTeamContainer.generated.h"

class UMacanUserWidget;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiOrganizeSkillTeamContainer : public UMacanUserWidget_TaishiOrganizeTeamContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* selecter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* Arrow_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* Arrow_R;
    
    UMacanUserWidget_TaishiOrganizeSkillTeamContainer();

};


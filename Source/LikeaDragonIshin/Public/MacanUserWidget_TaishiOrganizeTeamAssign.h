#pragma once
#include "CoreMinimal.h"
#include "EBtlStyle.h"
#include "MacanUserWidget_TaishiOrganizeBase.h"
#include "MacanUserWidget_TaishiOrganizeTeamAssign.generated.h"

class UMacanUserWidget;
class UMacanUserWidget_TaishiOrganizeTeamContainer;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiOrganizeTeamAssign : public UMacanUserWidget_TaishiOrganizeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EBtlStyle, UMacanUserWidget_TaishiOrganizeTeamContainer*> team_container_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EBtlStyle, UMacanUserWidget*> style_btn_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBtlStyle, int32> style_index_map;
    
    UMacanUserWidget_TaishiOrganizeTeamAssign();

};


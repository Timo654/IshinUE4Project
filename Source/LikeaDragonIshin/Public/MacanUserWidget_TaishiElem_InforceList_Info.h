#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_TaishiElem_InforceList_Info.generated.h"

class UMacanRichTextBlock;
class UMacanTextBlock;
class UMacanUserWidget_BtlWeaponRankIcon;
class UMacanUserWidget_BtlWeaponSelAbility;
class UMacanUserWidget_SimpleIconTexture;
class UMacanUserWidget_SimpleSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiElem_InforceList_Info : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_SimpleIconTexture* elem_icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* elem_text_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanRichTextBlock* elem_text_description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* elem_text_attack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMacanUserWidget_SimpleSwitcher*> star_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlWeaponRankIcon* elem_rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMacanUserWidget_BtlWeaponSelAbility*> ability_slot_list;
    
    UMacanUserWidget_TaishiElem_InforceList_Info();

};


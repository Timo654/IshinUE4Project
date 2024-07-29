#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget_TaishiOrganizeBase.h"
#include "Templates/SubclassOf.h"
#include "MacanUserWidget_TaishiMemberListItem.generated.h"

class UHorizontalBox;
class UMacanUserWidget_TaishiOrganizeCard;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiMemberListItem : public UMacanUserWidget_TaishiOrganizeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* CardRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMacanUserWidget_TaishiOrganizeCard> card_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMacanUserWidget_TaishiOrganizeCard*> card_list;
    
    UMacanUserWidget_TaishiMemberListItem();

};


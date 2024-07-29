#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget_TaishiOrganizeBase.h"
#include "Templates/SubclassOf.h"
#include "MacanUserWidget_TaishiOrganizeTeamImpl.generated.h"

class UMacanUserWidget_TaishiOrganizeCard;
class UMacanUserWidget_TaishiOrganizeCardCursor;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiOrganizeTeamImpl : public UMacanUserWidget_TaishiOrganizeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMacanUserWidget_TaishiOrganizeCardCursor> wbp_card_cursor_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMacanUserWidget_TaishiOrganizeCard*> card_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> teamNameArray;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiOrganizeCardCursor* card_cursor;
    
public:
    UMacanUserWidget_TaishiOrganizeTeamImpl();

};


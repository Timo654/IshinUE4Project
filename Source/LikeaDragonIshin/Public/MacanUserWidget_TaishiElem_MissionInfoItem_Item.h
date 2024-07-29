#pragma once
#include "CoreMinimal.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_TaishiElem_MissionInfoItem_Item.generated.h"

class UMacanTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiElem_MissionInfoItem_Item : public UMacanUserWidget, public IUserObjectListEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* text_box;
    
    UMacanUserWidget_TaishiElem_MissionInfoItem_Item();


    // Fix for true pure virtual functions not being implemented
};


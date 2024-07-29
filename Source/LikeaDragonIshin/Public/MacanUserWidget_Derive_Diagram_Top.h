#pragma once
#include "CoreMinimal.h"
#include "EUIKajiyaWeaponsAndArmorType.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_Derive_Diagram_Top.generated.h"

class UCanvasPanel;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_Derive_Diagram_Top : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName topItemIdName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIKajiyaWeaponsAndArmorType myWeaponsAndArmorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* CanvasPanel_ItemRoot;
    
    UMacanUserWidget_Derive_Diagram_Top();

};


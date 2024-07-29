#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget_TaishiYesNo_window.h"
#include "MacanUserWidget_TaishiReincarnation.generated.h"

class UMacanTextBlock;
class UMacanUserWidget_TaishiDetail_DetailFull;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiReincarnation : public UMacanUserWidget_TaishiYesNo_window {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiDetail_DetailFull* card_detail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* ryugyoku_counter;
    
    UMacanUserWidget_TaishiReincarnation();

};


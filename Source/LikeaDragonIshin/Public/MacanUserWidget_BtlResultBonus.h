#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget_BtlResultBase.h"
#include "MacanUserWidget_BtlResultBonus.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BtlResultBonus : public UMacanUserWidget_BtlResultBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BonusName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BonusCount;
    
    UMacanUserWidget_BtlResultBonus();

};


#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget_BtlResultBase.h"
#include "MacanUserWidget_BtlResultExp.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class LIKEADRAGONISHIN_API UMacanUserWidget_BtlResultExp : public UMacanUserWidget_BtlResultBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* exp_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* money_text;
    
    UMacanUserWidget_BtlResultExp();

};


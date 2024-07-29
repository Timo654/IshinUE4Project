#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget_BtlResultBase.h"
#include "MacanUserWidget_BtlResultRank.generated.h"

class UMacanUserWidget_BtlResultBonus;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BtlResultRank : public UMacanUserWidget_BtlResultBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlResultBase* result_assessment_attack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlResultBase* result_assessment_defence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlResultBase* result_assessment_arts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMacanUserWidget_BtlResultBonus*> result_assessment_bonus_A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMacanUserWidget_BtlResultBonus*> result_assessment_bonus_B;
    
    UMacanUserWidget_BtlResultRank();

};


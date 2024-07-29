#pragma once
#include "CoreMinimal.h"
#include "EBtlValuation.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_BtlValuationMain.generated.h"

class UMacanUserWidget_BtlValuation_Rank;
class UMacanUserWidget_BtlValuation_Valuation;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BtlValuationMain : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlValuation_Valuation* valuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlValuation_Rank* rank;
    
    UMacanUserWidget_BtlValuationMain();

    UFUNCTION(BlueprintCallable)
    void setValuation(EBtlValuation NewValuation);
    
    UFUNCTION(BlueprintCallable)
    void SetRank(int32 NewRank);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable)
    void abort();
    
};


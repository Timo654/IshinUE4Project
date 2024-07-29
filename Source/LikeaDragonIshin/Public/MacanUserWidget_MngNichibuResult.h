#pragma once
#include "CoreMinimal.h"
#include "EMngNichibuResultType.h"
#include "MacanUserWidget.h"
#include "MngNichibuResultInfo.h"
#include "MacanUserWidget_MngNichibuResult.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_MngNichibuResult : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMngNichibuResultType resultType;
    
    UMacanUserWidget_MngNichibuResult();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeResultNotify(bool isIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeRankNotify(bool isIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeKousinNotify(bool isIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeButtonNotify(bool isIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeButtonInfoNotify(bool isIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DrawScoreNotify(FMngNichibuResultInfo Info);
    
};


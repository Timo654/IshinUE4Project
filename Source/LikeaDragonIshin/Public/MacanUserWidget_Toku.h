#pragma once
#include "CoreMinimal.h"
#include "EUIState.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_Toku.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_Toku : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_Toku();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRank(int32 rank);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPoint(int32 Point);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLocation(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAdditionl(int32 Point);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RankWinFade(EUIState State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RankFade(EUIState State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PointWinFade(EUIState State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PointAdd(EUIState State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EUIState GetPointWinUIState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EvadeRankWinFade(EUIState State);
    
    UFUNCTION(BlueprintCallable)
    void CtrlVisible();
    
    UFUNCTION(BlueprintCallable)
    bool CheckRank(int32 rank);
    
    UFUNCTION(BlueprintCallable)
    bool CheckPoint(int32 Point);
    
    UFUNCTION(BlueprintCallable)
    bool CheckLocation(int32 Location);
    
    UFUNCTION(BlueprintCallable)
    bool CheckAdditional(int32 Point);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AdditionalPoitFade(EUIState State);
    
};


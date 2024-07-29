#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_BtlBg.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BtlBg : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_BtlBg();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void VisibleItemBase03Event(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWinEvent(int32 idx, bool isWind);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleEvent(int32 idx, bool isWin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleBackRankingBtlEvent(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRoundNumEvent(int32 idx, const FText& Num, bool isWin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemBaseEvent(int32 idx, int32 itemSlotIdx, const FText& Name, const UTexture2D* tex, bool isWin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemBase02Event(int32 idx, const FText& Name, const UTexture2D* tex, bool isWin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHideBackRankingBtlEvent(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEnemyStyleEvent(int32 idx, const FText& Style, bool isWin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEnemyNameEvent(int32 idx, const FText& Name, bool isWin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEnemyFaceEvent(int32 idx, const UTexture2D* tex, bool isWin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideItemBaseEvent(int32 idx, bool isWin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideItemBase03Event(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideItemBase02Event(int32 idx, bool isWin);
    
};


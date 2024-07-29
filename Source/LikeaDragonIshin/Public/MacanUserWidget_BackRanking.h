#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_BackRanking.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BackRanking : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_BackRanking();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void VisibleItemBase03Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWinEvent(bool isWind);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleEvent(bool isWin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRoundNumEvent(const FText& Num, bool isWin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemBaseEvent(int32 idx, const FText& Name, const UTexture2D* tex, bool isWin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemBase02Event(const FText& Name, const UTexture2D* tex, bool isWin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEnemyStyleEvent(const FText& Style, bool isWin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEnemyNameEvent(const FText& Name, bool isWin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEnemyFaceEvent(const UTexture2D* tex, bool isWin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideItemBaseEvent(bool isWin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideItemBase03Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideItemBase02Event(bool isWin);
    
};


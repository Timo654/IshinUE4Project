#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_BackRanking_Ptn.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BackRanking_Ptn : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_BackRanking_Ptn();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void VisibleItemBase03Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWinEvent(bool isWind);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRoundNumEvent(const FText& Num);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemBaseEvent(int32 idx, const FText& Name, const UTexture2D* tex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemBase02Event(const FText& Name, const UTexture2D* tex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEnemyStyleEvent(const FText& Style);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEnemyNameEvent(const FText& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEnemyFaceEvent(const UTexture2D* tex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideItemBaseEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideItemBase03Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideItemBase02Event();
    
};


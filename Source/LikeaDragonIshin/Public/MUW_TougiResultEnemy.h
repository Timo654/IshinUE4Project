#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MUW_TougiResultEnemy.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UMUW_TougiResultEnemy : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMUW_TougiResultEnemy();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetType(int32 Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStyle(const FText& Style);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRoundNum(const FText& Num);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItem(const FText& Name, const UTexture2D* tex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEnemyName(const FText& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEnemyFace(const UTexture2D* face);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeIn();
    
};


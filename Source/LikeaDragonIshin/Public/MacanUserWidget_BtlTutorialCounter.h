#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_BtlTutorialCounter.generated.h"

class UMacanTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BtlTutorialCounter : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* text_denominator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* text_numerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* anim_on;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* anim_countup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* anim_done;
    
    UMacanUserWidget_BtlTutorialCounter();

    UFUNCTION(BlueprintCallable)
    void setDesired(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void Set(int32 NewCount);
    
    UFUNCTION(BlueprintCallable)
    void resetCount();
    
    UFUNCTION(BlueprintCallable)
    void on();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isDone() const;
    
    UFUNCTION(BlueprintCallable)
    void ExecCountUp();
    
    UFUNCTION(BlueprintCallable)
    void Count();
    
};


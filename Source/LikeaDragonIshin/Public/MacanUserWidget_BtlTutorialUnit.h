#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_BtlTutorialUnit.generated.h"

class UMacanRichTextBlock;
class UMacanUserWidget_BtlTutorialCounter;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BtlTutorialUnit : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanRichTextBlock* TextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlTutorialCounter* counter;
    
    UMacanUserWidget_BtlTutorialUnit();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetText(const FText& text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void setDesired(int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCount(int32 NewCount);
    
    UFUNCTION(BlueprintCallable)
    void on();
    
    UFUNCTION(BlueprintCallable)
    void off();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnd();
    
    UFUNCTION(BlueprintCallable)
    bool isDone();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Count();
    
};


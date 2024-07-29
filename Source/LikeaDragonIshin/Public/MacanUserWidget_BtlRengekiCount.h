#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_BtlRengekiCount.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BtlRengekiCount : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> anim_list;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Playing;
    
public:
    UMacanUserWidget_BtlRengekiCount();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCount(int32 Num, const FSlateColor& Color);
    
    UFUNCTION(BlueprintCallable)
    void Play(int32 Num, const FSlateColor& Color);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStateOutEndEvent();
    
};


#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_BtlRengekiEff.generated.h"

class UMacanTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BtlRengekiEff : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* anim_play;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* r_count;
    
    UMacanUserWidget_BtlRengekiEff();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCount(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void Play(int32 Num);
    
};


#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "TaishiCardData.h"
#include "TaishiCardState.h"
#include "MacanUserWidget_BtlResultCard.generated.h"

class UMacanTextBlock;
class UMacanUserWidget_CardMain;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BtlResultCard : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_CardMain* CardImpl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* LvUpText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* EscapeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* LvUpAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* EscapeAnim;
    
    UMacanUserWidget_BtlResultCard();

    UFUNCTION(BlueprintCallable)
    void setCardState(const FTaishiCardState& State);
    
    UFUNCTION(BlueprintCallable)
    void setCardData(const FTaishiCardData& Data, bool forceAvailable);
    
    UFUNCTION(BlueprintCallable)
    void on();
    
    UFUNCTION(BlueprintCallable)
    void off();
    
};


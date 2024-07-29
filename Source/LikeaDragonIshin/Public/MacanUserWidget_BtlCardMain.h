#pragma once
#include "CoreMinimal.h"
#include "ETaishiRarity.h"
#include "ETaishiType.h"
#include "MacanUserWidget.h"
#include "TaishiCardData.h"
#include "TaishiCardState.h"
#include "MacanUserWidget_BtlCardMain.generated.h"

class UMacanUserWidget_BtlCardEff;
class UMacanUserWidget_CardMain;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BtlCardMain : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_CardMain* main_card;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* switcher_front;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<ETaishiRarity, UMacanUserWidget_BtlCardEff*> effect_front;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* switcher_back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<ETaishiRarity, UMacanUserWidget_BtlCardEff*> effect_Back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* elem_desert;
    
    UMacanUserWidget_BtlCardMain();

    UFUNCTION(BlueprintCallable)
    void skillUsed();
    
    UFUNCTION(BlueprintCallable)
    void setDesert(bool _isDesert);
    
    UFUNCTION(BlueprintCallable)
    void on();
    
    UFUNCTION(BlueprintCallable)
    void off();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETaishiType getType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETaishiRarity getRarity() const;
    
    UFUNCTION(BlueprintCallable)
    void cardUpdate(const FTaishiCardState& card);
    
    UFUNCTION(BlueprintCallable)
    void cardChange(const FTaishiCardData& card);
    
};


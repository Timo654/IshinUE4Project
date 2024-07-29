#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "TaishiDataFull.h"
#include "Templates/SubclassOf.h"
#include "MacanUserWidget_BtlResultCardSlot.generated.h"

class UHorizontalBox;
class UMacanScrollBox;
class UMacanUserWidget_BtlResultCard;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BtlResultCardSlot : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* CardHorizontalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanScrollBox* ScrollBox;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMacanUserWidget_BtlResultCard> wbp_card_widget;
    
public:
    UMacanUserWidget_BtlResultCardSlot();

    UFUNCTION(BlueprintCallable)
    void on();
    
    UFUNCTION(BlueprintCallable)
    void off();
    
    UFUNCTION(BlueprintCallable)
    UMacanScrollBox* getScroll();
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
    UFUNCTION(BlueprintCallable)
    void Add(const FTaishiDataFull& fulldata);
    
};


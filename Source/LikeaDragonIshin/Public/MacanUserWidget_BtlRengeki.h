#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_BtlRengeki.generated.h"

class UMacanUserWidget_BtlRengekiBg;
class UMacanUserWidget_BtlRengekiCount;
class UMacanUserWidget_BtlRengekiEff;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BtlRengeki : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlRengekiBg* rengeki_bg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlRengekiCount* rengeki_count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlRengekiEff* rengeki_eff;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor Color_Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor Color_Over5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor Color_Over10;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor Color_Over20;
    
public:
    UMacanUserWidget_BtlRengeki();

    UFUNCTION(BlueprintCallable)
    void SetCount(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRengekiCountStateOutEnd();
    
};


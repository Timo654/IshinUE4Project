#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_BtlHact.generated.h"

class UMacanUserWidget_BtlHactBase;
class UMacanUserWidget_BtlHactGaugeEff;
class UMacanUserWidget_BtlHactHact;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BtlHact : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* HactEffB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlHactBase* HactBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlHactHact* HactHact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlHactGaugeEff* HactEffT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* lifeEffect;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Gauge_Decrease_wait_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Gauge_Decrease_Speed;
    
public:
    UMacanUserWidget_BtlHact();

    UFUNCTION(BlueprintCallable)
    void playOnLife();
    
    UFUNCTION(BlueprintCallable)
    void on();
    
    UFUNCTION(BlueprintCallable)
    void off();
    
    UFUNCTION(BlueprintCallable)
    void ApplyHactImmidiateWithoutPerform(float _hact, float Max);
    
    UFUNCTION(BlueprintCallable)
    void ApplyHact(float DeltaTime, float Val, float Max);
    
};


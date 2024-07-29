#pragma once
#include "CoreMinimal.h"
#include "ETaishiType.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_CardSkillGauge.generated.h"

class USizeBox;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_CardSkillGauge : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* gauge;
    
    UMacanUserWidget_CardSkillGauge();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopUsing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartUsing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTypeImplement(ETaishiType Type);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPercent(float Val);
    
};


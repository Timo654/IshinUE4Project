#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_TougiEnemyData.generated.h"

class UMacanUserWidget_EnDt_BackPlayer;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TougiEnemyData : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_EnDt_BackPlayer* EnemyDataBkPl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFinishFadeInBackPlayer;
    
    UMacanUserWidget_TougiEnemyData();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInBackPlayerEvent();
    
};


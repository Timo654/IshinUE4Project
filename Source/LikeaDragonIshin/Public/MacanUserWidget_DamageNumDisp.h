#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_DamageNumDisp.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_DamageNumDisp : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnd;
    
    UMacanUserWidget_DamageNumDisp();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNum(int32 damage_num);
    
};


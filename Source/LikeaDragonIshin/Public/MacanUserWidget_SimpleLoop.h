#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_SimpleLoop.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_SimpleLoop : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* loop_anim;
    
    UMacanUserWidget_SimpleLoop();

};


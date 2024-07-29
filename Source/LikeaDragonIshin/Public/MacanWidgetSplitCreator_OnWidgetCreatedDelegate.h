#pragma once
#include "CoreMinimal.h"
#include "MacanWidgetSplitCreator_OnWidgetCreatedDelegate.generated.h"

class UUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMacanWidgetSplitCreator_OnWidgetCreated, int32, widget_index, UUserWidget*, Widget);


#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TaishiMenuOrganizeWidgetManager.generated.h"

class UMacanWidgetSplitCreator;
class UUserWidget;

UCLASS(Blueprintable)
class UTaishiMenuOrganizeWidgetManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanWidgetSplitCreator* split_creator;
    
public:
    UTaishiMenuOrganizeWidgetManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnWidgetCreatedEvent(int32 widget_index, const UUserWidget* Widget);
    
};


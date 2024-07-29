#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MacanWidgetSplitCreator_OnWidgetCreatedDelegate.h"
#include "MacanWidgetSplitCreator_RefData.h"
#include "Templates/SubclassOf.h"
#include "MacanWidgetSplitCreator.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class UMacanWidgetSplitCreator : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMacanWidgetSplitCreator_OnWidgetCreated OnWidgetCreated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMacanWidgetSplitCreator_RefData ref_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UUserWidget>> widget_class_array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> widget_array;
    
public:
    UMacanWidgetSplitCreator();

private:
    UFUNCTION(BlueprintCallable)
    void onAssetLoaded(int32 widget_index, int32 handle_index);
    
};


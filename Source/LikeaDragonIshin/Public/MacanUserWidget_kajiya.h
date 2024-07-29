#pragma once
#include "CoreMinimal.h"
#include "EMenuItem_kajiya.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_kajiya.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_kajiya : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMacanUserWidget*> m_menu_widgets;
    
    UMacanUserWidget_kajiya();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void set_slot(int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMacanUserWidget* getMenuWidget(EMenuItem_kajiya Item);
    
};


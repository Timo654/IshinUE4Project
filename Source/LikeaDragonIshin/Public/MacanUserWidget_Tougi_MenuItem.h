#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "TOUGI_MENU_MENU_ANIM_KIND.h"
#include "TOUGI_MENU_MENU_ITEM_KIND.h"
#include "MacanUserWidget_Tougi_MenuItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_Tougi_MenuItem : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFinishDecide;
    
    UMacanUserWidget_Tougi_MenuItem();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMenuItemKindEvent(TOUGI_MENU_MENU_ITEM_KIND itemKind);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetManuAnimKindEvent(TOUGI_MENU_MENU_ANIM_KIND animKind);
    
};


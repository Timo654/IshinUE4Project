#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "MacanUserWidget.h"
#include "TOUGI_MENU_MENU_ANIM_KIND.h"
#include "TOUGI_MENU_MENU_ITEM_KIND.h"
#include "MacanUserWidget_Tougi_MenuMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_Tougi_MenuMenu : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFinishFadeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFinishFadeIn;
    
    UMacanUserWidget_Tougi_MenuMenu();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMenuVisibilityEvent(int32 idx, ESlateVisibility visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMenuItemKindEvent(int32 idx, TOUGI_MENU_MENU_ITEM_KIND itemKind);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMenuAnimKindEvent(int32 idx, TOUGI_MENU_MENU_ANIM_KIND animKind);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsFinishDecideEvent(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInEvent();
    
};


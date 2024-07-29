#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_TougiEnemyList.generated.h"

class UMacanUserWidget_BtlBg;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TougiEnemyList : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFinishFadeInBtlStartWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFinishFadeOutBtlStartWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFinishFadeInYesNoWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFinishFadeOutYesNoWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFinishDecideYesNoCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFinishFadeInBtlBg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRequestFromMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlBg* UserWidgetBtlBg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlBg* UserWidgetMenuBg;
    
    UMacanUserWidget_TougiEnemyList();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutYesNoWindowEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutYesNoCursorwEvent(int32 yes_no_cursor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutInfoBtn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutBtlStartWindowEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutBtlBg();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInYesNoWindowEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInYesNoCursorwEvent(int32 yes_no_cursor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInInfoBtn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInBtlStartWindowEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInBtlBg();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecideYesNoCursorEvent(int32 yes_no_cursor);
    
};


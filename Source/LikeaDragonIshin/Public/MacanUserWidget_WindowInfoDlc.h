#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_WindowInfoDlc.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_WindowInfoDlc : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_WindowInfoDlc();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTextCursor(const int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTitle(const FText& text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetReadOnly(const bool ReadOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDetail(const FText& text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeIn();
    
};


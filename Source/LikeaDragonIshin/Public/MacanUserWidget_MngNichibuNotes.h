#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_MngNichibuNotes.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_MngNichibuNotes : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_MngNichibuNotes();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnHideNotify();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFrameSignNotify(float Frame);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFrameInNotify(float Frame);
    
    UFUNCTION(BlueprintCallable)
    void SetFinishPushAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PushNotesNotify();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitNotify(int32 colorIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideNotify();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeNotesNotify(bool isIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AppearNotesNotify();
    
};


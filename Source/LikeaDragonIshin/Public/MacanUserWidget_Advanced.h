#pragma once
#include "CoreMinimal.h"
#include "EUIState.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_Advanced.generated.h"

class UPanelWidget;
class UScrollBox;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_Advanced : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_Advanced();

    UFUNCTION(BlueprintCallable)
    bool TransUIState(EUIState inState, bool inForce);
    
    UFUNCTION(BlueprintCallable)
    bool TransPlayAnimationString(const FString& InName, bool inLoop);
    
    UFUNCTION(BlueprintCallable)
    bool TransPlayAnimation(UWidgetAnimation* inAnim, bool inLoop);
    
    UFUNCTION(BlueprintCallable)
    bool StopAllAnimation();
    
    UFUNCTION(BlueprintCallable)
    void SetActiveAnim(UWidgetAnimation* inAnim, bool Inactive);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseFinished();
    
    UFUNCTION(BlueprintCallable)
    void PressFinished();
    
    UFUNCTION(BlueprintCallable)
    void Pressed(UPanelWidget* inPanelWidget, int32 inIndex);
    
    UFUNCTION(BlueprintCallable)
    bool PlayingAnimation(const FString& InName);
    
    UFUNCTION(BlueprintCallable)
    void PlayCtrlAnimation(UWidgetAnimation* inAnim);
    
    UFUNCTION(BlueprintCallable)
    bool PlayAnimationString(const FString& InName, bool inLoop);
    
    UFUNCTION(BlueprintCallable)
    void OutFinished();
    
    UFUNCTION(BlueprintCallable)
    void InStarted();
    
    UFUNCTION(BlueprintCallable)
    UWidgetAnimation* GetAnimation(const FString& InName);
    
    UFUNCTION(BlueprintCallable)
    void FocusOut(UPanelWidget* inPanelWidget);
    
    UFUNCTION(BlueprintCallable)
    void FocusInScrollBox(UScrollBox* inScrollWidget, int32 inIndex, bool isAnimate, int32 InRange);
    
    UFUNCTION(BlueprintCallable)
    void FocusIn(UPanelWidget* inPanelWidget, int32 inIndex);
    
    UFUNCTION(BlueprintCallable)
    bool ExistAnimation(const FString& InName);
    
    UFUNCTION(BlueprintCallable)
    void CtrlAnim();
    
    UFUNCTION(BlueprintCallable)
    void BindVisibleOn(const FString& InName);
    
    UFUNCTION(BlueprintCallable)
    void BindVisibleOff(const FString& InName);
    
};


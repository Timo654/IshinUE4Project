#pragma once
#include "CoreMinimal.h"
#include "EKeyconfigSceneID.h"
#include "MacanUserWidget.h"
#include "UIBtnGuideItemData.h"
#include "WBP_button.h"
#include "MacanUserWidget_Keyconfig.generated.h"

class UAppPad;

UCLASS(Blueprintable, EditInlineNew)
class LIKEADRAGONISHIN_API UMacanUserWidget_Keyconfig : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_Keyconfig();

    UFUNCTION(BlueprintCallable)
    bool UpdateKeyconfig();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateButtonGuide(const TArray<FUIBtnGuideItemData>& inList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void uiUpdateContents();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StickMenuEnable(bool sw);
    
public:
    UFUNCTION(BlueprintCallable)
    void StartKeyconfig();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetType(int32 Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStick(bool Normal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSensitivity(int32 sens);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetScene(int32 Scene);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMenuCursor(int32 Index, int32 anim);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDevice(int32 dev);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetButtonList(EKeyconfigSceneID btnScene, const TArray<FWBP_button>& list);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDevChange();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAppPad* GetPad();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInOut(bool in, bool isPC);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestUI();
    
};


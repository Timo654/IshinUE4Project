#pragma once
#include "CoreMinimal.h"
#include "ItemAbilityDispData.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_PosPlayerData.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_PosPlayerData : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_PosPlayerData();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisiblePlayerData(bool is_menu);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerInfo(bool is_menu, const FText& lv, const FText& BallNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetArmInfo(bool is_menu, int32 idx, const FText& ArmName, const UTexture2D* ArmTex, const TArray<FItemAbilityDispData>& ArmAbilityList, int32 AriSlotNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsFinishFadeOutPlayerDataEvent(bool is_menu);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsFinishFadeInPlayerDataEvent(bool is_menu);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutEvent(bool is_menu);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInEvent(bool is_menu);
    
};


#pragma once
#include "CoreMinimal.h"
#include "ItemAbilityDispData.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_PlayerData_PlDt.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_PlayerData_PlDt : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFinishFadeInPlayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFinishFadeOutPlayerData;
    
    UMacanUserWidget_PlayerData_PlDt();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerInfo(const FText& lv, const FText& BallNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetArmInfo(int32 idx, const FText& ArmName, const UTexture2D* ArmTex, const TArray<FItemAbilityDispData>& ArmAbilityList, int32 AriSlotNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInEvent();
    
};


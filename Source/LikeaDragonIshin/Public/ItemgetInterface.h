#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EEquipRank.h"
#include "ItemAbilityDispData.h"
#include "ItemgetInterface.generated.h"

UINTERFACE(Blueprintable)
class UItemgetInterface : public UInterface {
    GENERATED_BODY()
};

class IItemgetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRarity(int32 Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemInfo(FName ItemId, bool isArm, const TArray<FItemAbilityDispData>& markInfos, EEquipRank rank);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetArmRank(int32 Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWindowOpenEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWindowCloseEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseWindow();
    
};


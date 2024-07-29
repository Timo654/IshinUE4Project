#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "DlcItemInfo.h"
#include "EDlcId.h"
#include "DlcSubsystem.generated.h"

UCLASS(Blueprintable)
class UDlcSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UDlcSubsystem();

    UFUNCTION(BlueprintCallable)
    bool ShowStore();
    
    UFUNCTION(BlueprintCallable)
    void ResetEntitlements();
    
    UFUNCTION(BlueprintCallable)
    void ResetConsumableEntitlements();
    
    UFUNCTION(BlueprintCallable)
    void QueryConsumable();
    
    UFUNCTION(BlueprintCallable)
    void Query();
    
    UFUNCTION(BlueprintCallable)
    bool IsStoreUIClosed() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsDownloaded(const EDlcId in_id);
    
    UFUNCTION(BlueprintCallable)
    bool IsAvailable(const EDlcId in_id);
    
    UFUNCTION(BlueprintCallable)
    bool IsAnyBonus();
    
    UFUNCTION(BlueprintCallable)
    void GetDlcItemInfo(TArray<FDlcItemInfo>& o_dlc_info);
    
    UFUNCTION(BlueprintCallable)
    void DebugAccrueConsumable();
    
    UFUNCTION(BlueprintCallable)
    bool Consume(FDlcItemInfo& o_dlc_info);
    
};


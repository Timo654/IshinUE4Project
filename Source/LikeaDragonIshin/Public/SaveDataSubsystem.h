#pragma once
#include "CoreMinimal.h"
#include "ESortType.h"
#include "SaveDataInfo.h"
#include "TickableGameInstanceSubsystem.h"
#include "SaveDataSubsystem.generated.h"

UCLASS(Blueprintable)
class USaveDataSubsystem : public UTickableGameInstanceSubsystem {
    GENERATED_BODY()
public:
    USaveDataSubsystem();

    UFUNCTION(BlueprintCallable)
    void Query();
    
    UFUNCTION(BlueprintCallable)
    static bool IsActive();
    
    UFUNCTION(BlueprintCallable)
    void GetSaveDataInfo(const ESortType sort_type, TArray<FSaveDataInfo>& o_save_info, const bool is_prev_gen, const bool is_clear, const bool is_contain_auto, bool is_auto_save_only);
    
    UFUNCTION(BlueprintCallable)
    void GetAutoSaveDataInfo(const ESortType sort_type, TArray<FSaveDataInfo>& o_save_info, const bool is_prev_gen);
    
    UFUNCTION(BlueprintCallable)
    void AutoSaveGameData(const bool no_capture);
    
};


#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ETrophyId.h"
#include "TrophySubsystem.generated.h"

UCLASS(Blueprintable)
class UTrophySubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UTrophySubsystem();

    UFUNCTION(BlueprintCallable)
    void Unlock(const ETrophyId in_id);
    
    UFUNCTION(BlueprintCallable)
    void Query();
    
protected:
    UFUNCTION(BlueprintCallable)
    void on_write_success_callback(FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag);
    
    UFUNCTION(BlueprintCallable)
    void on_write_failure_callback(FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag);
    
    UFUNCTION(BlueprintCallable)
    void on_query_success_callback();
    
    UFUNCTION(BlueprintCallable)
    void on_query_failure_callback();
    
};


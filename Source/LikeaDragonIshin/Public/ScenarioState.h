#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ScenarioState.generated.h"

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UScenarioState : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UScenarioState();

    UFUNCTION(BlueprintCallable)
    void StartTimerBP(int32 sID);
    
    UFUNCTION(BlueprintCallable)
    void SetTimerValueBP(int32 sID, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    bool SetFlagForEditorBP(int32 sScenario, int32 sbEditorFlagIdx, bool bStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetCounterBP(int32 sID, int32 sValue);
    
    UFUNCTION(BlueprintCallable)
    void ResetTimerBP(int32 sID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsResetTimerBP(int32 sID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableTimerBP(int32 sID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTimeValueBP(int32 sID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTimerNumBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTimerNameBP(int32 sID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStateNameForEditorBP(int32 sScenario, int32 sEditorFlagIdx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStartScenarioIndexBP(int32 idx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScenarioNumBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetScenarioNameBP(int32 idx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScenarioIndexOfNumBP(int32 idx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScenarioDataCounterMinBP(int32 sID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScenarioDataCounterMaxBP(int32 sID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFlagNumForEditorBP(int32 sScenario) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFlagCsvNumBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetFlagCsvDataStringBP(int32 idx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCounterNumBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCounterNameBP(int32 sID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCounterBP(int32 sID) const;
    
    UFUNCTION(BlueprintCallable)
    void EndTimerBP(int32 sID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CmpFlagForEditorBP(int32 sScenario, int32 sEditorFlagIdx, bool bBool) const;
    
};


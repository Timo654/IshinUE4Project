#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "eMACAN_ACT_ID.h"
#include "WorldManager.generated.h"

class AActionBase;
class ARootAction;

UCLASS(Blueprintable)
class UWorldManager : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARootAction* m_rootAction;
    
public:
    UWorldManager();

    UFUNCTION(BlueprintCallable)
    void OnWorldBeginPlay();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLevelLoaded();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsThereAction(eMACAN_ACT_ID actionID, AActionBase* Parent);
    
    UFUNCTION(BlueprintCallable)
    AActionBase* InsertAction(eMACAN_ACT_ID actionID, AActionBase* Parent);
    
    UFUNCTION(BlueprintCallable)
    void GetActionTypeCast(eMACAN_ACT_ID actionID, AActionBase* Parent, TSubclassOf<AActionBase> ActionClass, AActionBase*& outAction);
    
    UFUNCTION(BlueprintCallable)
    AActionBase* GetActionBase(eMACAN_ACT_ID actionID, AActionBase* Parent);
    
};


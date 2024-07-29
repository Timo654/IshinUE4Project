#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "eMACAN_ACT_ID.h"
#include "eMACAN_ACT_OBJ_ID.h"
#include "ActionBase.generated.h"

class AActionBase;

UCLASS(Blueprintable)
class AActionBase : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActionBase*> m_children;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    eMACAN_ACT_ID m_actionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActionBase* m_parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<eMACAN_ACT_ID, AActionBase*> m_activeActionMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<eMACAN_ACT_ID> m_deleteActionIDArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<eMACAN_ACT_ID> m_hasDeleteActionIDArray;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    eMACAN_ACT_OBJ_ID m_pairObjID;
    
public:
    AActionBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool RequestDeleteAction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsContainsAction(eMACAN_ACT_ID actionID) const;
    
    UFUNCTION(BlueprintCallable)
    void InsertAction(eMACAN_ACT_ID actionID, AActionBase* Action);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActionBase* GetActionRecursive(eMACAN_ACT_ID actionID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    eMACAN_ACT_ID GetActionID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActionBase* GetAction(eMACAN_ACT_ID actionID) const;
    
    UFUNCTION(BlueprintCallable)
    bool DeleteActionImmediate();
    
};


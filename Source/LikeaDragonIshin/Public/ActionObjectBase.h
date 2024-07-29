#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "eMACAN_ACT_OBJ_ID.h"
#include "ActionObjectBase.generated.h"

class AActionBase;
class UActionObjectBase;

UCLASS(Blueprintable)
class UActionObjectBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UActionObjectBase*> m_children;
    
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    eMACAN_ACT_OBJ_ID m_actionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UActionObjectBase* m_parent;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<eMACAN_ACT_OBJ_ID, UActionObjectBase*> m_activeActionMap;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<eMACAN_ACT_OBJ_ID> m_deleteActionIDArray;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<eMACAN_ACT_OBJ_ID> m_hasDeleteActionIDArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActionBase* pairAction;
    
public:
    UActionObjectBase();

    UFUNCTION(BlueprintCallable)
    void Update(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    bool RequestDeleteAction();
    
    UFUNCTION()
    bool IsContainsAction(eMACAN_ACT_OBJ_ID actionID) const;
    
    UFUNCTION()
    void InsertAction(eMACAN_ACT_OBJ_ID actionID, UActionObjectBase* Action);
    
    UFUNCTION()
    UActionObjectBase* GetActionRecursive(eMACAN_ACT_OBJ_ID actionID) const;
    
    UFUNCTION()
    eMACAN_ACT_OBJ_ID GetActionID() const;
    
    UFUNCTION()
    UActionObjectBase* GetAction(eMACAN_ACT_OBJ_ID actionID) const;
    
    UFUNCTION(BlueprintCallable)
    void EndUpdate();
    
    UFUNCTION(BlueprintCallable)
    bool DeleteActionImmediate();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BeginUpdate();
    
};


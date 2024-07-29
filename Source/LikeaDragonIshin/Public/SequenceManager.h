#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SequenceManager.generated.h"

class UDataTable;
class USeqCallbackObj;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API USequenceManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCmdDelegate, FName, Cmd);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AssetDataTable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCmdDelegate CommandCallbacks;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> notifyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USeqCallbackObj*> callbackObjs;
    
public:
    USequenceManager();

    UFUNCTION(BlueprintCallable)
    void RemoveCommandCallback(USeqCallbackObj* obj);
    
    UFUNCTION(BlueprintCallable)
    void NotifyMessage(FName msg);
    
    UFUNCTION(BlueprintCallable)
    void AddCommandCallback(FName Cmd, USeqCallbackObj* obj);
    
};


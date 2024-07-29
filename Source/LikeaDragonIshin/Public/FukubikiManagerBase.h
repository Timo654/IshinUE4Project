#pragma once
#include "CoreMinimal.h"
#include "ActionBase.h"
#include "FukubikiManagerInterface.h"
#include "eFukubikiBallKind.h"
#include "FukubikiManagerBase.generated.h"

UCLASS(Blueprintable)
class AFukubikiManagerBase : public AActionBase, public IFukubikiManagerInterface {
    GENERATED_BODY()
public:
    AFukubikiManagerBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool wait_cue_sheet();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ticket_spend_base();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ticket_check_continue_base();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void onStartFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void onEndFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void load_cue_sheet();
    
public:
    UFUNCTION(BlueprintCallable)
    void GetItemInternal(FName item_id);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 get_prize_index(bool doUpdate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void free_cue_sheet();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool check_rare_fukubiki();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool check_high_rate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool check_atari_overlap(eFukubikiBallKind ball);
    

    // Fix for true pure virtual functions not being implemented
};


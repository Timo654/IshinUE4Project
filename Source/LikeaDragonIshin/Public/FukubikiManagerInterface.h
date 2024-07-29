#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "eFUKUBIKI_RESULT_REACTION.h"
#include "eFukubikiBallKind.h"
#include "eFukubikiMessage.h"
#include "FukubikiManagerInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UFukubikiManagerInterface : public UInterface {
    GENERATED_BODY()
};

class IFukubikiManagerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool WdrSetIdleAI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WdrNoticeReactionOneMore(bool sw);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WdrNoticeReactionEnd(bool sw);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WdrNoticeReaction(bool sw);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    eFUKUBIKI_RESULT_REACTION WdrGetReaction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool WdrCheckNoticeReactionOneMore();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool WdrCheckNoticeReactionEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool WdrCheckNoticeReaction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool WaitCancelSE();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool TicketSpend();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool TicketCheckContinue();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TalkRequest(eFukubikiMessage req);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SoundInit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SoundDest();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PutPlayStickIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PrizeUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PrizePresentSE(bool atari, int32 hazureNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    eFukubikiBallKind PrizeLottery(FName& item_id);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PrizeAddWinCounter(eFukubikiBallKind ball);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayCancelSE();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool MsgWaitUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MsgPrizeGet(FName item_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MsgCloseUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MotionInit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MotionDest();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsTalkingCCC();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsRotateStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsRotateEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsRareFukubiki();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 IsHighRate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HumanFreezeCCC(bool sw);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetRotate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetPlayCounter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeoutPlayStickIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool DataLoadWait();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DataLoad();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DataFree();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddPlayCounter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddItem(FName item_id);
    
};


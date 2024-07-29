#pragma once
#include "CoreMinimal.h"
#include "ActionBase.h"
#include "EOichokabuAttribute.h"
#include "EOichokabuGameState.h"
#include "EOichokabuLevel.h"
#include "EPadButton.h"
#include "ActionOichokabuActor.generated.h"

class AKoikoiCard;
class AOichokabuGameModeBase;
class AOichokabuPlayerBase;

UCLASS(Blueprintable)
class AActionOichokabuActor : public AActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOichokabuGameModeBase* GameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOichokabuGameState GameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AOichokabuPlayerBase*> players;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AOichokabuPlayerBase*> childCardSelectPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> playerSelectFieldNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> dueledPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOichokabuPlayerBase* nowPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 parentNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 turnPlayerNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 playerFieldNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AKoikoiCard*> selectedFieldCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 playerNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> maxBetNums;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirstSelectWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_dwStartKiryuMoney;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isFirstPlay;
    
public:
    AActionOichokabuActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnBindMouseActionCallBack();
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartRuleExplanation();
    
    UFUNCTION(BlueprintCallable)
    void RestartGame();
    
    UFUNCTION(BlueprintCallable)
    void PrintOperationExplanation();
    
    UFUNCTION(BlueprintCallable)
    int32 PlayerFirstCardChoiced(AKoikoiCard* selected, const TArray<AKoikoiCard*>& fieldDeck);
    
    UFUNCTION(BlueprintCallable)
    TArray<AKoikoiCard*> PlayerBetStart(TArray<AKoikoiCard*> deck);
    
    UFUNCTION(BlueprintCallable)
    void ParentDecide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClickSelectContinue(FName Name, int32 Index, EPadButton Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClickFirstMenu(FName Name, int32 Index, EPadButton Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClickDrawChoice(FName Name, int32 Index, EPadButton Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnClickCustom_(int32 Parent, int32 Index);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClickCustom(int32 Parent, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void NextParent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MouseOverSelectContinue(FName Name, int32 Index, FName Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MouseOverFirstMenu(FName Name, int32 Index, FName Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MouseOverDrawChoice(FName Name, int32 Index, FName Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void MouseOverCustom_(int32 Parent, int32 Index);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MouseOverCustom(int32 Parent, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool IsSequenceChange();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerParent() const;
    
    UFUNCTION(BlueprintCallable)
    void InitPlayers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetSelectedChildIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetPlayersName() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetMoney();
    
    UFUNCTION(BlueprintCallable)
    EOichokabuLevel GetEnemyLv();
    
    UFUNCTION(BlueprintCallable)
    void FinishGameUpdate();
    
    UFUNCTION(BlueprintCallable)
    void FinishGame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 FieldOwnerPlayerNumber(int32 Field) const;
    
    UFUNCTION(BlueprintCallable)
    bool Duel(EOichokabuAttribute ParentAttribute, EOichokabuAttribute childAttribute);
    
    UFUNCTION(BlueprintCallable)
    bool ChkPause();
    
    UFUNCTION(BlueprintCallable)
    bool CheckHasan();
    
    UFUNCTION(BlueprintCallable)
    void ChangeState(EOichokabuGameState State);
    
public:
    UFUNCTION(BlueprintCallable)
    void BindMouseActionCallBackSelectContinue();
    
    UFUNCTION(BlueprintCallable)
    void BindMouseActionCallBackFirstMenu();
    
    UFUNCTION(BlueprintCallable)
    void BindMouseActionCallBackDrawChoice();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddWin(EOichokabuLevel lv);
    
    UFUNCTION(BlueprintCallable)
    int32 AddMoney(int32 Money);
    
};


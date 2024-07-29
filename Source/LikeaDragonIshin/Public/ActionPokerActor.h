#pragma once
#include "CoreMinimal.h"
#include "ActionBase.h"
#include "EPokerGameState.h"
#include "ActionPokerActor.generated.h"

class AActor;
class APokerCameraActor;
class APokerDeck;
class APokerGameModeBase;
class APokerNonPlayer;
class APokerPlayer;
class APokerPlayerBase;
class UMacanUIDataPoker;

UCLASS(Blueprintable)
class AActionPokerActor : public AActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APokerDeck* deck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPokerGameState GameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APokerPlayer* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APokerNonPlayer*> cpuPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APokerPlayerBase*> playerBases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APokerGameModeBase* GameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APokerCameraActor* CameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isInterrupt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 nextCPUIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> CPUTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> isCPUTableUseFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIDataPoker* UIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isContinueOrEndSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 continueOrEndCursol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isSankakuWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isSankaku;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 sankakuCursol;
    
public:
    AActionPokerActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void WaitSankaku();
    
    UFUNCTION(BlueprintCallable)
    void UpdateWaitGameEnd();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateState(float DeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateShowDown();
    
    UFUNCTION(BlueprintCallable)
    void UpdateSelectItem();
    
    UFUNCTION(BlueprintCallable)
    void UpdateSelectHelpMenu();
    
    UFUNCTION(BlueprintCallable)
    void UpdateSelectContinueOrEnd();
    
    UFUNCTION(BlueprintCallable)
    void UpdateSankaku();
    
    UFUNCTION(BlueprintCallable)
    void UpdateRoundEnd();
    
    UFUNCTION(BlueprintCallable)
    void UpdateResult();
    
    UFUNCTION(BlueprintCallable)
    void UpdateOpeningMsg();
    
    UFUNCTION(BlueprintCallable)
    void UpdateOpenCards();
    
    UFUNCTION(BlueprintCallable)
    void UpdateNoticeNoEffectItem();
    
    UFUNCTION(BlueprintCallable)
    void UpdateNoticeLuckUp();
    
    UFUNCTION(BlueprintCallable)
    void UpdateInputSankaku();
    
    UFUNCTION(BlueprintCallable)
    void UpdateGameEnd(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateForceGameEnd(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateDiscard();
    
    UFUNCTION(BlueprintCallable)
    void UpdateCollectingWinner(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCheckRound();
    
    UFUNCTION(BlueprintCallable)
    void UpdateChangeComputer();
    
    UFUNCTION(BlueprintCallable)
    void UpdateActionPlayer(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateActionComputer(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateAction();
    
    UFUNCTION(BlueprintCallable)
    void StartYakuExplanation();
    
    UFUNCTION(BlueprintCallable)
    void StartSankaku();
    
    UFUNCTION(BlueprintCallable)
    void StartRuleExplanation();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayers(APokerPlayer* InPlayer, const TArray<APokerNonPlayer*>& InCpu);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCPUTable(APokerNonPlayer* nonPlayer);
    
    UFUNCTION(BlueprintCallable)
    void seq_TutorialRoundEnd();
    
    UFUNCTION(BlueprintCallable)
    void seq_TutorialRoundBegin();
    
    UFUNCTION(BlueprintCallable)
    void seq_TutorialPrevDiscardMsg();
    
    UFUNCTION(BlueprintCallable)
    void seq_TutorialPrevActionPlayer();
    
    UFUNCTION(BlueprintCallable)
    void seq_TutorialPrevActionComputer();
    
    UFUNCTION(BlueprintCallable)
    void seq_TutorialPrepration();
    
    UFUNCTION(BlueprintCallable)
    void seq_TutorialPostDiscard();
    
    UFUNCTION(BlueprintCallable)
    void seq_TutorialPostActionPlayer();
    
    UFUNCTION(BlueprintCallable)
    void seq_TutorialPostActionComputer();
    
    UFUNCTION(BlueprintCallable)
    void seq_TutorialEndMsg();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_Card(AActor* card);
    
    UFUNCTION(BlueprintCallable)
    void OnClick_Action(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void MouseOver_Card(AActor* card);
    
    UFUNCTION(BlueprintCallable)
    void MouseOver_Action(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void init_seq_TutorialRoundEnd();
    
    UFUNCTION(BlueprintCallable)
    void init_seq_TutorialRoundBegin();
    
    UFUNCTION(BlueprintCallable)
    void init_seq_TutorialPrevDiscardMsg();
    
    UFUNCTION(BlueprintCallable)
    void init_seq_TutorialPrevActionPlayer();
    
    UFUNCTION(BlueprintCallable)
    void init_seq_TutorialPrevActionComputer();
    
    UFUNCTION(BlueprintCallable)
    void init_seq_TutorialPrepration();
    
    UFUNCTION(BlueprintCallable)
    void init_seq_TutorialPostDiscard();
    
    UFUNCTION(BlueprintCallable)
    void init_seq_TutorialPostActionPlayer();
    
    UFUNCTION(BlueprintCallable)
    void init_seq_TutorialPostActionComputer();
    
    UFUNCTION(BlueprintCallable)
    void init_seq_TutorialEndMsg();
    
    UFUNCTION(BlueprintCallable)
    void FinishGameUpdate();
    
    UFUNCTION(BlueprintCallable)
    void FinishGame();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState();
    
protected:
    UFUNCTION(BlueprintCallable)
    void EnterWaitGameEnd();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState();
    
protected:
    UFUNCTION(BlueprintCallable)
    void EnterShowDown();
    
    UFUNCTION(BlueprintCallable)
    void EnterSetupGame();
    
    UFUNCTION(BlueprintCallable)
    void EnterSetStructure();
    
    UFUNCTION(BlueprintCallable)
    void EnterSetRule();
    
    UFUNCTION(BlueprintCallable)
    void EnterSetComputer();
    
    UFUNCTION(BlueprintCallable)
    void EnterSelectItem();
    
    UFUNCTION(BlueprintCallable)
    void EnterSelectHelpMenu();
    
    UFUNCTION(BlueprintCallable)
    void EnterSelectContinueOrEnd();
    
    UFUNCTION(BlueprintCallable)
    void EnterResult();
    
    UFUNCTION(BlueprintCallable)
    void EnterPreparationRound();
    
    UFUNCTION(BlueprintCallable)
    void EnterPreparationGameStart();
    
    UFUNCTION(BlueprintCallable)
    void EnterOpeningMsg();
    
    UFUNCTION(BlueprintCallable)
    void EnterNoticeNoEffectItem();
    
    UFUNCTION(BlueprintCallable)
    void EnterNoticeLuckUp();
    
    UFUNCTION(BlueprintCallable)
    void EnterGameStart();
    
    UFUNCTION(BlueprintCallable)
    void EnterGameEnd();
    
    UFUNCTION(BlueprintCallable)
    void EnterForceGameEnd();
    
    UFUNCTION(BlueprintCallable)
    void EnterDistributionCard();
    
    UFUNCTION(BlueprintCallable)
    void EnterDiscard();
    
    UFUNCTION(BlueprintCallable)
    void EnterCollectingWinner();
    
    UFUNCTION(BlueprintCallable)
    void EnterCheckRound();
    
    UFUNCTION(BlueprintCallable)
    void EnterChangeComputer();
    
    UFUNCTION(BlueprintCallable)
    void EnterActionPlayer();
    
    UFUNCTION(BlueprintCallable)
    void EnterAction();
    
    UFUNCTION(BlueprintCallable)
    void ChangeState(EPokerGameState State);
    
};


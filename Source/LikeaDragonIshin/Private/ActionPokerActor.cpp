#include "ActionPokerActor.h"

AActionPokerActor::AActionPokerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->deck = NULL;
    this->GameState = EPokerGameState::Action;
    this->Player = NULL;
    this->GameMode = NULL;
    this->CameraActor = NULL;
    this->isInterrupt = false;
    this->nextCPUIndex = 0;
    this->UIData = NULL;
    this->isContinueOrEndSelected = false;
    this->continueOrEndCursol = 0;
    this->isSankakuWait = false;
    this->isSankaku = false;
    this->sankakuCursol = 0;
}

void AActionPokerActor::WaitSankaku() {
}

void AActionPokerActor::UpdateWaitGameEnd() {
}


void AActionPokerActor::UpdateShowDown() {
}

void AActionPokerActor::UpdateSelectItem() {
}

void AActionPokerActor::UpdateSelectHelpMenu() {
}

void AActionPokerActor::UpdateSelectContinueOrEnd() {
}

void AActionPokerActor::UpdateSankaku() {
}

void AActionPokerActor::UpdateRoundEnd() {
}

void AActionPokerActor::UpdateResult() {
}

void AActionPokerActor::UpdateOpeningMsg() {
}

void AActionPokerActor::UpdateOpenCards() {
}

void AActionPokerActor::UpdateNoticeNoEffectItem() {
}

void AActionPokerActor::UpdateNoticeLuckUp() {
}

void AActionPokerActor::UpdateInputSankaku() {
}

void AActionPokerActor::UpdateGameEnd(float DeltaTime) {
}

void AActionPokerActor::UpdateForceGameEnd(float DeltaTime) {
}

void AActionPokerActor::UpdateDiscard() {
}

void AActionPokerActor::UpdateCollectingWinner(float DeltaTime) {
}

void AActionPokerActor::UpdateCheckRound() {
}

void AActionPokerActor::UpdateChangeComputer() {
}

void AActionPokerActor::UpdateActionPlayer(float DeltaTime) {
}

void AActionPokerActor::UpdateActionComputer(float DeltaTime) {
}

void AActionPokerActor::UpdateAction() {
}

void AActionPokerActor::StartYakuExplanation() {
}

void AActionPokerActor::StartSankaku() {
}

void AActionPokerActor::StartRuleExplanation() {
}

void AActionPokerActor::SetPlayers(APokerPlayer* InPlayer, const TArray<APokerNonPlayer*>& InCpu) {
}


void AActionPokerActor::seq_TutorialRoundEnd() {
}

void AActionPokerActor::seq_TutorialRoundBegin() {
}

void AActionPokerActor::seq_TutorialPrevDiscardMsg() {
}

void AActionPokerActor::seq_TutorialPrevActionPlayer() {
}

void AActionPokerActor::seq_TutorialPrevActionComputer() {
}

void AActionPokerActor::seq_TutorialPrepration() {
}

void AActionPokerActor::seq_TutorialPostDiscard() {
}

void AActionPokerActor::seq_TutorialPostActionPlayer() {
}

void AActionPokerActor::seq_TutorialPostActionComputer() {
}

void AActionPokerActor::seq_TutorialEndMsg() {
}

void AActionPokerActor::OnClick_Card(AActor* card) {
}

void AActionPokerActor::OnClick_Action(int32 Index) {
}

void AActionPokerActor::MouseOver_Card(AActor* card) {
}

void AActionPokerActor::MouseOver_Action(int32 Index) {
}

void AActionPokerActor::init_seq_TutorialRoundEnd() {
}

void AActionPokerActor::init_seq_TutorialRoundBegin() {
}

void AActionPokerActor::init_seq_TutorialPrevDiscardMsg() {
}

void AActionPokerActor::init_seq_TutorialPrevActionPlayer() {
}

void AActionPokerActor::init_seq_TutorialPrevActionComputer() {
}

void AActionPokerActor::init_seq_TutorialPrepration() {
}

void AActionPokerActor::init_seq_TutorialPostDiscard() {
}

void AActionPokerActor::init_seq_TutorialPostActionPlayer() {
}

void AActionPokerActor::init_seq_TutorialPostActionComputer() {
}

void AActionPokerActor::init_seq_TutorialEndMsg() {
}

void AActionPokerActor::FinishGameUpdate() {
}

void AActionPokerActor::FinishGame() {
}


void AActionPokerActor::EnterWaitGameEnd() {
}


void AActionPokerActor::EnterShowDown() {
}

void AActionPokerActor::EnterSetupGame() {
}

void AActionPokerActor::EnterSetStructure() {
}

void AActionPokerActor::EnterSetRule() {
}

void AActionPokerActor::EnterSetComputer() {
}

void AActionPokerActor::EnterSelectItem() {
}

void AActionPokerActor::EnterSelectHelpMenu() {
}

void AActionPokerActor::EnterSelectContinueOrEnd() {
}

void AActionPokerActor::EnterResult() {
}

void AActionPokerActor::EnterPreparationRound() {
}

void AActionPokerActor::EnterPreparationGameStart() {
}

void AActionPokerActor::EnterOpeningMsg() {
}

void AActionPokerActor::EnterNoticeNoEffectItem() {
}

void AActionPokerActor::EnterNoticeLuckUp() {
}

void AActionPokerActor::EnterGameStart() {
}

void AActionPokerActor::EnterGameEnd() {
}

void AActionPokerActor::EnterForceGameEnd() {
}

void AActionPokerActor::EnterDistributionCard() {
}

void AActionPokerActor::EnterDiscard() {
}

void AActionPokerActor::EnterCollectingWinner() {
}

void AActionPokerActor::EnterCheckRound() {
}

void AActionPokerActor::EnterChangeComputer() {
}

void AActionPokerActor::EnterActionPlayer() {
}

void AActionPokerActor::EnterAction() {
}

void AActionPokerActor::ChangeState(EPokerGameState State) {
}



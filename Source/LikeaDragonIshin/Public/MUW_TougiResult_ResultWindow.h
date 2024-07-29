#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "UTougiResultEnemyInfo.h"
#include "MUW_TougiResult_ResultWindow.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMUW_TougiResult_ResultWindow : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFinishFadeIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFinishFadeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUTougiResultEnemyInfo> ResutlEnemyInfoArray;
    
    UMUW_TougiResult_ResultWindow();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void VisibleArrowUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void VisibleArrowDown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateResultEnemy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetUpTournamentHyokaVerticalBox();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetUpSurvivalHyokaVerticalBox();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTraversedTime(const FText& TITLE, const FText& Time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTournamentHyoukaWinningStreakBonus(const FText& TITLE, const FText& result, const FText& Num);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTournamentHyoukaBasicRewardMoney(const FText& Money);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTournamentHyoukaBasicRewardBall(const FText& TITLE, const FText& basicReward, const FText& BallNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTougyokuScale(const FText& titie, int32 Point, float ratio);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTougyokuNum(const FText& Num);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSenseki(int32 win, int32 lose);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRewardMoney(const FText& Money);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRestHP(const FText& TITLE, const FText& hp);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMaxAttackCombo(const FText& TITLE, int32 comboNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGekiha(int32 win, int32 Total);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFinalEvaluation(const FText& TITLE, const FText& Num);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDefeatedNum(const FText& TITLE, int32 defeatedNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideArrowUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideArrowDown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimArrowUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimArrowDown();
    
};


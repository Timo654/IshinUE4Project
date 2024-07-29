#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DuelCancelDelegate.h"
#include "DuelPlayerChoiceDelegate.h"
#include "DuelPlayerDelegate.h"
#include "EOichokabuDrawChoices.h"
#include "EOichokabuPlayerStatus.h"
#include "FirstCardChoiceDelegate.h"
#include "NextGameDelegate.h"
#include "OichokabuPlayerBase.h"
#include "WindowChoiceItemInfo.h"
#include "OichokabuPlayerActor.generated.h"

class AKoikoiCard;
class AOichokabuPlayerController;

UCLASS(Blueprintable)
class AOichokabuPlayerActor : public AOichokabuPlayerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOichokabuPlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> childCardPoses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> childCardIndexs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWindowChoiceItemInfo> drawChoiceInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWindowChoiceItemInfo> drawChoiceInfoShiroku;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOichokabuPlayerStatus State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AKoikoiCard*> selectableCards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 cursolNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 betCoin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 betCoinCursol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 maxBetCoinRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOichokabuDrawChoices isDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isContinue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ableShiroku;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDuelPlayer duelPlayerAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDuelCancel duelCancelAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFirstCardChoice firstCardChoiceStartAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDuelPlayerChoice duelPlayerChoiceStartAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNextGame nextGameAction;
    
    AOichokabuPlayerActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnBindMouse();
    
    UFUNCTION(BlueprintCallable)
    void SelectDuelPlayer(TArray<int32> indexs, TArray<FVector> Poses, TArray<AKoikoiCard*> selectable);
    
    UFUNCTION(BlueprintCallable)
    void SelectContinue();
    
    UFUNCTION(BlueprintCallable)
    void FirstChoiceDecide();
    
    UFUNCTION(BlueprintCallable)
    void DuelPlayerDecide();
    
    UFUNCTION(BlueprintCallable)
    void DuelCancel();
    
    UFUNCTION(BlueprintCallable)
    void DrawChoiceDecide();
    
    UFUNCTION(BlueprintCallable)
    void DecideContinue();
    
    UFUNCTION(BlueprintCallable)
    void BetCoinDecide();
    
    UFUNCTION(BlueprintCallable)
    void BetCoinChange(bool isRaise);
    
};


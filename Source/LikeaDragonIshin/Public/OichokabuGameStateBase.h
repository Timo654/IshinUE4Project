#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "EOichokabuAttribute.h"
#include "EOichokabuGameState.h"
#include "OichokabuGameStateBase.generated.h"

class AKoikoiCard;
class AOichokabuGameModeBase;
class AOichokabuPlayerBase;

UCLASS(Blueprintable)
class AOichokabuGameStateBase : public AGameStateBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOichokabuGameModeBase* GameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOichokabuGameState GameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AOichokabuPlayerBase*> players;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AOichokabuPlayerBase*> childCardSelectPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> maxBetNums;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirstSelectWaitTime;
    
public:
    AOichokabuGameStateBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void RestartGame();
    
    UFUNCTION(BlueprintCallable)
    int32 PlayerFirstCardChoiced(AKoikoiCard* selected, const TArray<AKoikoiCard*>& fieldDeck);
    
    UFUNCTION(BlueprintCallable)
    TArray<AKoikoiCard*> PlayerBetStart(TArray<AKoikoiCard*> deck);
    
    UFUNCTION(BlueprintCallable)
    void ParentDecide();
    
    UFUNCTION(BlueprintCallable)
    void NextParent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerParent() const;
    
    UFUNCTION(BlueprintCallable)
    void InitPlayers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetSelectedChildIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetPlayersName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 FieldOwnerPlayerNumber(int32 Field) const;
    
    UFUNCTION(BlueprintCallable)
    bool Duel(EOichokabuAttribute ParentAttribute, EOichokabuAttribute childAttribute);
    
    UFUNCTION(BlueprintCallable)
    void ChangeState(EOichokabuGameState State);
    
};


#pragma once
#include "CoreMinimal.h"
#include "PokerCPU.h"
#include "PokerPlayerBase.h"
#include "PokerNonPlayer.generated.h"

UCLASS(Blueprintable)
class APokerNonPlayer : public APokerPlayerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText joinGameMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText leaveGameMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText retireChipMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText retireBooingMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> bluffMessage;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPokerCPU m_data;
    
public:
    APokerNonPlayer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCPUText(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SetCPUData(const FPokerCPU& inData);
    
};


#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CardChoiceDelegate.h"
#include "DrawChoiceDelegate.h"
#include "EOichokabuAttribute.h"
#include "OichokabuPlayerBase.generated.h"

class AKoikoiCard;

UCLASS(Blueprintable)
class AOichokabuPlayerBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText playerName;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCardChoice cardChoiceEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDrawChoice drawChoiceEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 maxBet;
    
    AOichokabuPlayerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetMaxBet(int32 Value);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Parent_ChoiceCard();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPlayerName() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void FirstChoiceCard();
    
public:
    UFUNCTION(BlueprintCallable)
    void FirstCardChoice(TArray<AKoikoiCard*> selectableCards);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DuelVoice();
    
public:
    UFUNCTION(BlueprintCallable)
    void DrawCardChoice(int32 Number, bool isArashiReach, bool shirokuNoNige);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BattleStartVoice();
    
    UFUNCTION(BlueprintCallable)
    void AttributeVoicePlay(EOichokabuAttribute Attribute);
    
};


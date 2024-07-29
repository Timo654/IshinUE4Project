#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ERivalLevel.h"
#include "KoikoiAttribute.h"
#include "KoikoiRivalPlayer.generated.h"

class AKoikoiCard;

UCLASS(Blueprintable)
class AKoikoiRivalPlayer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoikoiAttribute> myAttributeStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KoikoiSelectDelayTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText aiName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalLevel aiLevel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AKoikoiCard*> fieldCards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AKoikoiCard*> myHands;
    
public:
    AKoikoiRivalPlayer(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void StartDelay(float Time);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetEnemyLevel(ERivalLevel lv);
    
    UFUNCTION(BlueprintCallable)
    AKoikoiCard* HandChoice(const TArray<AKoikoiCard*>& Field, const TArray<FKoikoiAttribute>& myAttribute, const TArray<AKoikoiCard*>& hands, const TArray<FKoikoiAttribute>& rivalAttribute, int32 Month);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetName() const;
    
    UFUNCTION(BlueprintCallable)
    AKoikoiCard* FieldChoice(const TArray<AKoikoiCard*>& selectable);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool DelayNow();
    
public:
    UFUNCTION(BlueprintCallable)
    bool AIKoikoiChoice(int32 restMonth, int32 handsNum, int32 myPoint, int32 playerPoint, int32 myMonthPoint, int32 playerMonthPoint);
    
private:
    UFUNCTION(BlueprintCallable)
    AKoikoiCard* AgentTsukimiHanami();
    
    UFUNCTION(BlueprintCallable)
    AKoikoiCard* AgentSubSyun(int32 Month);
    
    UFUNCTION(BlueprintCallable)
    AKoikoiCard* AgentSubInoShikaCho();
    
    UFUNCTION(BlueprintCallable)
    AKoikoiCard* AgentSubGet20PointCard();
    
    UFUNCTION(BlueprintCallable)
    AKoikoiCard* AgentSubAoTan();
    
    UFUNCTION(BlueprintCallable)
    AKoikoiCard* AgentSubAkaTan();
    
    UFUNCTION(BlueprintCallable)
    AKoikoiCard* AgentSelectCard();
    
    UFUNCTION(BlueprintCallable)
    AKoikoiCard* AgentSakazuki();
    
    UFUNCTION(BlueprintCallable)
    AKoikoiCard* AgentMyAttribute(int32 Month);
    
    UFUNCTION(BlueprintCallable)
    AKoikoiCard* AgentKasu();
    
    UFUNCTION(BlueprintCallable)
    AKoikoiCard* AgentEnemyAttribute(int32 Month);
    
    UFUNCTION(BlueprintCallable)
    AKoikoiCard* AgentDropCard();
    
};


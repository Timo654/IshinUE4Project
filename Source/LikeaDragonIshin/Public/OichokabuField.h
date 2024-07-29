#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EHanafudaCardKind.h"
#include "EOichokabuAttribute.h"
#include "OichokabuField.generated.h"

class AKoikoiCard;

UCLASS(Blueprintable)
class AOichokabuField : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AKoikoiCard*> deck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AKoikoiCard*> parentCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AKoikoiCard*> child1Card;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AKoikoiCard*> child2Card;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AKoikoiCard*> child3Card;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AKoikoiCard*> child4Card;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AKoikoiCard*> childFieldCard;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector childFieldLeftUpperPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector childHorizontalInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector childVerticalInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector parentLeftPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector parentInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float firstDistDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float parentCardDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 childNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator frontCardRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator backCardRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float childCardRandomAngleRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float secondCardOpenSpeed;
    
    AOichokabuField(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    TArray<EHanafudaCardKind> ShuffleDeckDebug();
    
    UFUNCTION(BlueprintCallable)
    TArray<EHanafudaCardKind> ShuffleDeck();
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    AKoikoiCard* OpenSecondCard(int32 childNum, FVector& cursolPos, bool isUiDisp, int32 uiIndex, int32& outUiIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVector> GetSelectedChildCardPoses(TArray<int32> Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetParentLastDigitOpenCard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetParentLastDigit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetParentCardNum() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLastDigitOpenCardOnly(const TArray<AKoikoiCard*>& cards) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLastDigit(const TArray<AKoikoiCard*>& cards) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChildLastDigitOpenCard(int32 child) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChildLastDigit(int32 child) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChildCardNum(int32 child) const;
    
    UFUNCTION(BlueprintCallable)
    AKoikoiCard* FirstCardDist(int32& uiIndex);
    
    UFUNCTION(BlueprintCallable)
    AKoikoiCard* DrawCardParent(bool isPlayer, int32 uiIndex, int32& outUiIndex);
    
    UFUNCTION(BlueprintCallable)
    AKoikoiCard* DrawCardMonth(int32 Month);
    
    UFUNCTION(BlueprintCallable)
    AKoikoiCard* DrawCardChild(int32 child, bool isBack, bool isUiDisp, int32 uiIndex, int32& outUiIndex);
    
    UFUNCTION(BlueprintCallable)
    AKoikoiCard* DrawCard();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOichokabuAttribute CheckParentAttribute(bool isShirokuOn, bool isDoshippinOn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOichokabuAttribute CheckChildAttribute(int32 child, bool isShirokuOn, bool isDoshippinOn) const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOichokabuAttribute CheckAttribute(const TArray<AKoikoiCard*>& cards, bool isParent, bool isShirokuOn, bool isDoshippinOn) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckArachiReachParent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckArachiReachChild(int32 child) const;
    
};


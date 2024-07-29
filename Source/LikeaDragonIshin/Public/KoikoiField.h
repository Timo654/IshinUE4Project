#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EHanafudaCardKind.h"
#include "KoikoiField.generated.h"

class AKoikoiCard;

UCLASS(Blueprintable)
class AKoikoiField : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float firstDistCardSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AKoikoiCard*> threeMatchCards1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AKoikoiCard*> threeMatchCards2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float threeMatchAfterStopTime;
    
    AKoikoiField(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    TArray<EHanafudaCardKind> ShuffleDeckDebug(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    TArray<EHanafudaCardKind> ShuffleDeckChoiceParent();
    
    UFUNCTION(BlueprintCallable)
    TArray<EHanafudaCardKind> ShuffleDeck();
    
private:
    UFUNCTION(BlueprintCallable)
    void ResetThreeMatchCard();
    
public:
    UFUNCTION(BlueprintCallable)
    void CheckThreeMatchMonthCard(const TArray<AKoikoiCard*>& cards);
    
};


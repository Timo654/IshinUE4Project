#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EHanafudaAttribute.h"
#include "EHanafudaYakuState.h"
#include "KoikoiAttribute.h"
#include "KoikoiGuideMessage.h"
#include "KoikoiPlayerComponent.generated.h"

class AKoikoiCard;
class UKoikoiPlayerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoikoiPlayerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GetCardPosInterval_Kasu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GetCardPosInterval_Other;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GetCardKindOnePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> GetCardKindTwoPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> GetCardKindThreePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> GetCardKindFourPosition;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> gokouMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> shikouMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ameshikouMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> sankouMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> hanamizakeMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> tsukimizakeMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> inoshikachoMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> akatanMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> aotanMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> syunMask;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AKoikoiCard*> hands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AKoikoiCard*> playerGetCards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> playerGetCardsMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PutOutHandStopTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpenAfterStopTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RivalThinkingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector getCardSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isKoikoi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EHanafudaAttribute> achieveAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> attributePoint;
    
    UKoikoiPlayerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateSyunMask(int32 Month);
    
    UFUNCTION(BlueprintCallable)
    void SetGetCardPosZ(float Z);
    
    UFUNCTION(BlueprintCallable)
    void ResetMonth();
    
    UFUNCTION(BlueprintCallable)
    void PutOutHandMove(AKoikoiCard* putCard, const FVector& purposePos, const FRotator& purposeRot, float DelayTime, float stoptime, bool IsOpen, float openSpeed, float Speed);
    
    UFUNCTION(BlueprintCallable)
    void PutOutHand(AKoikoiCard* putCard);
    
    UFUNCTION(BlueprintCallable)
    AKoikoiCard* OpenAllHand();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoikoiGuideMessage GetGuideMessageData(UKoikoiPlayerComponent* rival, const TArray<AKoikoiCard*>& Field, bool isPlayer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetGuideMessage(UKoikoiPlayerComponent* rival, const TArray<AKoikoiCard*>& Field, bool isPlayer) const;
    
    UFUNCTION(BlueprintCallable)
    void GetCardUiData(const TArray<AKoikoiCard*>& getCards, TArray<int32>& Num, TArray<FVector>& Poses);
    
    UFUNCTION(BlueprintCallable)
    void GetCardData(const TArray<AKoikoiCard*>& getCards);
    
    UFUNCTION(BlueprintCallable)
    void GetCardAnimation(const TArray<AKoikoiCard*>& getCards);
    
    UFUNCTION(BlueprintCallable)
    void GetCard(const TArray<AKoikoiCard*>& getCards);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EHanafudaAttribute> GetAttributeEnums(const TArray<FKoikoiAttribute>& attributeList, int32& Point) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<EHanafudaYakuState> CreateListRevalNotYetAttribute(TArray<EHanafudaYakuState> stateList, bool useHanami, bool useShun);
    
    UFUNCTION(BlueprintCallable)
    TArray<EHanafudaYakuState> CreateListAchieveAttribute(TArray<EHanafudaYakuState> stateList);
    
    UFUNCTION(BlueprintCallable)
    bool CheckTeshi();
    
    UFUNCTION(BlueprintCallable)
    bool CheckSakazukiKasuChange();
    
    UFUNCTION(BlueprintCallable)
    TArray<FKoikoiAttribute> CheckNewAttribute(const TArray<FKoikoiAttribute>& attributeList);
    
    UFUNCTION(BlueprintCallable)
    bool CheckKuttuki();
    
    UFUNCTION(BlueprintCallable)
    TArray<FKoikoiAttribute> CheckAttribute(bool useHanami, bool useShun);
    
    UFUNCTION(BlueprintCallable)
    void ChangeSakazukiKasu();
    
};


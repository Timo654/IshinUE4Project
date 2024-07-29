#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/SkeletalMeshActor.h"
#include "ChangeDepthDelegate.h"
#include "EHanafudaCardKind.h"
#include "EHanafudaCardRank.h"
#include "KoikoiCard.generated.h"

class AKoikoiCard;

UCLASS(Blueprintable)
class AKoikoiCard : public ASkeletalMeshActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHanafudaCardRank CardRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CardMonth;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector purposePos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float moveEaseValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float moveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float moveDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator startRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator purposeRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float afterStopTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector purposeSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isSizeChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isAfterUIDisp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 isDispUIIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isOpening;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float openDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isOpenAfterMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float openSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isMoveAfterOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator closeRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator openRot;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeDepth changeDepthEvent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float cardDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHanafudaCardKind CardKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isKabuCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float defMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isFloat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector floatBasePos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector floatPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector floatPosValue;
    
    AKoikoiCard(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void PlayOpenSE();
    
    UFUNCTION(BlueprintCallable)
    void PlayMoveSE();
    
    UFUNCTION(BlueprintCallable)
    void OpenCardAfterMoveAndRotation(float openDelay, float inOpenSpeed, bool floating, const FVector& purpose, FRotator purposeRotate, float moveDelay, float Speed, float afterStop);
    
    UFUNCTION(BlueprintCallable)
    void OpenCardAfterDispUI(float Delay, float Speed, bool floating, int32 uiIndex);
    
    UFUNCTION(BlueprintCallable)
    void OpenCard(float Delay, float Speed, bool floating, bool isSoundNotPlay);
    
    UFUNCTION(BlueprintCallable)
    void MoveAfterOpenCardAndRotationAfterDispUI(float openDelay, float inOpenSpeed, bool floating, const FVector& purpose, FRotator purposeRotate, float moveDelay, float Speed, float afterStop, int32 uiIndex);
    
    UFUNCTION(BlueprintCallable)
    void MoveAfterOpenCardAndRotation(float openDelay, float inOpenSpeed, bool floating, const FVector& purpose, FRotator purposeRotate, float moveDelay, float Speed, float afterStop);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMove() const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckCardMatch(AKoikoiCard* card);
    
    UFUNCTION(BlueprintCallable)
    void ChangePixelDepth(float Value);
    
    UFUNCTION(BlueprintCallable)
    void ChangeOichokabuSE();
    
    UFUNCTION(BlueprintCallable)
    void CardRelativeMove(const FVector& purpose, float DelayTime, float Speed, float afterStop, bool floating);
    
    UFUNCTION(BlueprintCallable)
    void CardMoveAndRotateAfterDispUI(const FVector& purpose, FRotator purposeRotate, float DelayTime, float Speed, float afterStop, bool floating, int32 uiIndex);
    
    UFUNCTION(BlueprintCallable)
    void CardMoveAndRotate(const FVector& purpose, FRotator purposeRotate, float DelayTime, float Speed, float afterStop, bool floating);
    
    UFUNCTION(BlueprintCallable)
    void CardMove(const FVector& purpose, float DelayTime, float Speed, float afterStop, bool floating);
    
};


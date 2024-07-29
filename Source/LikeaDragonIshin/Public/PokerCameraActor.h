#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EPokerCameraType.h"
#include "PokerCameraActor.generated.h"

UCLASS(Blueprintable)
class APokerCameraActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPokerCameraType cameraType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPokerCameraType nextCameraType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float lerpValue;
    
public:
    APokerCameraActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetCameraTransform(FVector Pos, FVector intoffset, FVector Up);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeCameraType(EPokerCameraType Type);
    
    UFUNCTION(BlueprintCallable)
    bool AnimLerpUpdate(float DeltaTime);
    
};


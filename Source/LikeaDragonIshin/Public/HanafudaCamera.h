#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "HanafudaCamera.generated.h"

UCLASS(Blueprintable)
class AHanafudaCamera : public AActor {
    GENERATED_BODY()
public:
    AHanafudaCamera(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetFOV(float deg);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraTransform(FVector Pos, FVector intoffset, FVector Up);
    
};


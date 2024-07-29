#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "MngNichibuQteInterface.generated.h"

UINTERFACE(Blueprintable)
class UMngNichibuQteInterface : public UInterface {
    GENERATED_BODY()
};

class IMngNichibuQteInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGaugeFrame(float Frame);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayGoalEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetStartPosition(UPARAM(Ref) FVector2D& StartPos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetPointPositions(UPARAM(Ref) TArray<FVector2D>& Points);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetGoalPosition(UPARAM(Ref) FVector2D& goalPos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetCheckPointPositions(UPARAM(Ref) TArray<FVector2D>& Points);
    
};


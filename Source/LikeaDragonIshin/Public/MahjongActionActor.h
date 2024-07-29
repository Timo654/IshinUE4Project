#pragma once
#include "CoreMinimal.h"
#include "ActionBase.h"
#include "MahjongActionActor.generated.h"

class AMahjongModelManager;

UCLASS(Blueprintable)
class AMahjongActionActor : public AActionBase {
    GENERATED_BODY()
public:
    AMahjongActionActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SoundCursor();
    
    UFUNCTION(BlueprintCallable)
    void SetModelManager(AMahjongModelManager* manager);
    
    UFUNCTION(BlueprintCallable)
    void PlayerTouchPai(int32 Index, int32 paiID);
    
    UFUNCTION(BlueprintCallable)
    void PlayerDecidePai(int32 Index, int32 paiID);
    
    UFUNCTION(BlueprintCallable)
    bool IsTGSVersion();
    
};


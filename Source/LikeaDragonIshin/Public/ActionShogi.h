#pragma once
#include "CoreMinimal.h"
#include "ActionBase.h"
#include "ActionShogi.generated.h"

class AShogiManager;

UCLASS(Blueprintable)
class AActionShogi : public AActionBase {
    GENERATED_BODY()
public:
    AActionShogi(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TouchTableCallBack(int32 X, int32 Y);
    
    UFUNCTION(BlueprintCallable)
    void MouseOverTableCallBack(int32 X, int32 Y);
    
    UFUNCTION(BlueprintCallable)
    AShogiManager* GetShogiManager();
    
};


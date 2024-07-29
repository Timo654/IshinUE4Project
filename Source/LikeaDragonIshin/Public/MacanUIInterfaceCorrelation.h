#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "MacanUIInterfaceCorrelation.generated.h"

UINTERFACE(Blueprintable)
class UMacanUIInterfaceCorrelation : public UInterface {
    GENERATED_BODY()
};

class IMacanUIInterfaceCorrelation : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckIsSelectOK(FVector2D cursorPostion);
    
};


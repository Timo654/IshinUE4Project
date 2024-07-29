#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MacanUIInterfaceWindowTransform.generated.h"

UINTERFACE(Blueprintable)
class UMacanUIInterfaceWindowTransform : public UInterface {
    GENERATED_BODY()
};

class IMacanUIInterfaceWindowTransform : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UpdateScale();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UpdatePosition();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UpdateAngle();
    
};


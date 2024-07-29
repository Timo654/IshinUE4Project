#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MacanUIInterfaceWindowItemInfo.generated.h"

UINTERFACE(Blueprintable)
class UMacanUIInterfaceWindowItemInfo : public UInterface {
    GENERATED_BODY()
};

class IMacanUIInterfaceWindowItemInfo : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UpdateItemInfo();
    
};


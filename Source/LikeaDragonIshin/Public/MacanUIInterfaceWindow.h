#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MacanUIInterfaceWindow.generated.h"

UINTERFACE(Blueprintable)
class UMacanUIInterfaceWindow : public UInterface {
    GENERATED_BODY()
};

class IMacanUIInterfaceWindow : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UpdateWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UpdateMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UpdateAutoWrapText();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UpdateArrow();
    
};


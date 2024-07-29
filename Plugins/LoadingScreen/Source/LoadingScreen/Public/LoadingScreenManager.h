#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LoadingScreenManager.generated.h"

UCLASS(Blueprintable)
class LOADINGSCREEN_API ULoadingScreenManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    ULoadingScreenManager();

    UFUNCTION(BlueprintCallable)
    void ShowLoadingScreen();
    
    UFUNCTION(BlueprintCallable)
    bool IsShowLoadingScreen();
    
    UFUNCTION(BlueprintCallable)
    void HideLoadingScreen();
    
};


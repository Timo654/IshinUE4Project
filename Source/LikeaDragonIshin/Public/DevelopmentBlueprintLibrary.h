#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DevelopmentBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class UDevelopmentBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDevelopmentBlueprintLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetScriptDescription();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetGameRevision();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetBuildDateTime();
    
    UFUNCTION(BlueprintCallable)
    static void EndTrace();
    
    UFUNCTION(BlueprintCallable)
    static void BeginTrace(const FString& EventName);
    
};


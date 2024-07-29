#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LevelLoader.generated.h"

UCLASS(Blueprintable)
class ALevelLoader : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSubLevelsLoaded);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSubLevelsLoaded OnSubLevelsLoaded;
    
    ALevelLoader(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnLevelLoaded();
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadSubLevels(const TArray<FName>& SubLevelNames);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoading() const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "AlCookingMenuListEntryActor.generated.h"

UCLASS(Blueprintable)
class AAlCookingMenuListEntryActor : public AActor {
    GENERATED_BODY()
public:
    AAlCookingMenuListEntryActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStarNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetStarHideFlag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNewIconHide() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetNameColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMadeIconHide() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetListIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBk04HideAll() const;
    
};


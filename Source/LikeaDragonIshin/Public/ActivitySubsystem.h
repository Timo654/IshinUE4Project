#pragma once
#include "CoreMinimal.h"
#include "TickableGameInstanceSubsystem.h"
#include "ActivitySubsystem.generated.h"

UCLASS(Blueprintable)
class UActivitySubsystem : public UTickableGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UActivitySubsystem();

    UFUNCTION(BlueprintCallable)
    bool IsNoticeScreenSkip();
    
};


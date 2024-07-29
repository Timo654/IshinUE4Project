#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "AreaStreamingSubsystem.generated.h"

class AAreaStreamingVolume;

UCLASS(Blueprintable, Transient)
class UAreaStreamingSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AAreaStreamingVolume*> AreaStreamingVolumes;
    
public:
    UAreaStreamingSubsystem();

};


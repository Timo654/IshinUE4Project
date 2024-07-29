#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "CreateClusterSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class UCreateClusterSettings : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFilePath> AssetsAvoidCluster;
    
public:
    UCreateClusterSettings();

};


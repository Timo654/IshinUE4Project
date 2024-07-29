#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GlobalAlphaMeshCache.h"
#include "GlobalAlphaCacheManager.generated.h"

UCLASS(Blueprintable)
class UGlobalAlphaCacheManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGlobalAlphaMeshCache> CacheTable;
    
public:
    UGlobalAlphaCacheManager();

};


#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HumanPreload.generated.h"

class UHumanPreloadContainer;

UCLASS(Blueprintable)
class UHumanPreload : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UHumanPreloadContainer*> Map;
    
    UHumanPreload();

};


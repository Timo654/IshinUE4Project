#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HumanPreloadContainer.generated.h"

UCLASS(Blueprintable)
class UHumanPreloadContainer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* ObjPtr;
    
public:
    UHumanPreloadContainer();

};


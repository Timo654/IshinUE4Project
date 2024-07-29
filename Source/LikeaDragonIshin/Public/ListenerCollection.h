#pragma once
#include "CoreMinimal.h"
#include "ListenerCollection.generated.h"

class UInputDeviceListener;

USTRUCT(BlueprintType)
struct FListenerCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UInputDeviceListener*> list;
    
    LIKEADRAGONISHIN_API FListenerCollection();
};


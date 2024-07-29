#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UtilAnimAsset.generated.h"

class UAnimationAsset;
class UMotionProperty;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UUtilAnimAsset : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUtilAnimAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMotionProperty* GetMotionProperty(UAnimationAsset* in_AnimAsset);
    
};


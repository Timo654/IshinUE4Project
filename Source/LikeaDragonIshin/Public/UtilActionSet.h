#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ActionSetType.h"
#include "MotionSetType.h"
#include "UtilActionSet.generated.h"

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UUtilActionSet : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUtilActionSet();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMotionSetType MakeLiteralMotionSetType(FMotionSetType in_Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FActionSetType MakeLiteralActionSetType(FActionSetType in_Value);
    
    UFUNCTION(BlueprintCallable)
    static FName GetMotionSetTypeName(int32 in_index);
    
    UFUNCTION(BlueprintCallable)
    static FName GetActionSetTypeName(int32 in_index);
    
};


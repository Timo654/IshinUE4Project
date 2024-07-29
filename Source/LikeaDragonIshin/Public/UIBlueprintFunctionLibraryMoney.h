#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UIBlueprintFunctionLibraryMoney.generated.h"

UCLASS(Blueprintable)
class UUIBlueprintFunctionLibraryMoney : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUIBlueprintFunctionLibraryMoney();

    UFUNCTION(BlueprintCallable)
    static FText UIMoneyFuncInt32ToFText(int32 inInt, bool isMonOmitted);
    
};


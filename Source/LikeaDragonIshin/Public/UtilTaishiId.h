#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TaishiCardListId.h"
#include "UtilTaishiId.generated.h"

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UUtilTaishiId : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUtilTaishiId();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTaishiCardListId MakeTaishiCardListId(FTaishiCardListId in_CardId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakTaishiCardListId(const FTaishiCardListId& in_Source, int32& out_Value);
    
};


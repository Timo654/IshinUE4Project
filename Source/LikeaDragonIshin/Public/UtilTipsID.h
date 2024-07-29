#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TipsID.h"
#include "UtilTipsID.generated.h"

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UUtilTipsID : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUtilTipsID();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTipsID MakeTipsID(FTipsID in_tipsID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetTipsIDString(const FTipsID in_Source);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FTipsID> GetTipsIDAll();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakTipsID(const FTipsID& in_Source, int32& out_Value);
    
};


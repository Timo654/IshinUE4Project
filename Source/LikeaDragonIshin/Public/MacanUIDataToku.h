#pragma once
#include "CoreMinimal.h"
#include "MacanUIData.h"
#include "MacanUIDataToku.generated.h"

class UMacanUserWidget_Toku;

UCLASS(Blueprintable)
class UMacanUIDataToku : public UMacanUIData {
    GENERATED_BODY()
public:
    UMacanUIDataToku();

    UFUNCTION(BlueprintCallable)
    void Update(const UMacanUserWidget_Toku* InWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetProcessRankUpText();
    
    UFUNCTION(BlueprintCallable)
    void SetProcessEnd();
    
    UFUNCTION(BlueprintCallable)
    void SetProcessAdd();
    
    UFUNCTION(BlueprintCallable)
    void SetProcess(int32 process_num);
    
};


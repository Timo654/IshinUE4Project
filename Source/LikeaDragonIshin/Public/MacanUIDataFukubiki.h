#pragma once
#include "CoreMinimal.h"
#include "FukubikiPrizeItemInfo.h"
#include "MacanUIData.h"
#include "MacanUIDataFukubiki.generated.h"

class UMacanUserWidget;

UCLASS(Blueprintable)
class UMacanUIDataFukubiki : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* buttonGuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* prizeListWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isVisibleButtonGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isVisiblePrizeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFukubikiPrizeItemInfo> prizeInfoArray;
    
    UMacanUIDataFukubiki();

    UFUNCTION(BlueprintCallable)
    void SetVisiblePrizeList(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleButtonGuide(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetItemInfosByNum(TArray<int32> numbers, TArray<int32> getCounts);
    
    UFUNCTION(BlueprintCallable)
    void SetItemInfosByID(TArray<FName> IDs, TArray<int32> getCounts);
    
    UFUNCTION(BlueprintCallable)
    void SetItemInfoByNum(int32 Index, int32 Number, int32 getCount);
    
    UFUNCTION(BlueprintCallable)
    void SetItemInfoByID(int32 Index, FName ID, int32 getCount);
    
};


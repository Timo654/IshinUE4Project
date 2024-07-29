#pragma once
#include "CoreMinimal.h"
#include "ERyouriMenuUI.h"
#include "EUIResultOnOrOff.h"
#include "MacanUIData.h"
#include "RyouriSyokuzaiUI.h"
#include "UIItemItemData.h"
#include "MacanUIDataAlRyouri.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataAlRyouri : public UMacanUIData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIItemItemData> menuItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText detailName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRyouriSyokuzaiUI> detailSyokuzaiList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText harukaMessage;
    
public:
    UMacanUIDataAlRyouri();

    UFUNCTION(BlueprintCallable)
    void OnClick_ListEntry(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void MouseOver_ListEntry(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool IsNeedUpdateThisUI(ERyouriMenuUI uiType, EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsNeedUpdate(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWheelNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FUIItemItemData> GetItemList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetHarukaMessage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FRyouriSyokuzaiUI> GetDetailSyokuzaiList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDetailStarNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDetailName() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishUpdateUI(ERyouriMenuUI uiType);
    
};


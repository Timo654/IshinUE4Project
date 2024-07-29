#pragma once
#include "CoreMinimal.h"
#include "EMainMenuRyouriUI.h"
#include "EUIResultOnOrOff.h"
#include "MacanUIData.h"
#include "RyouriSyokuzaiUI.h"
#include "UIItemItemData.h"
#include "MacanUIDataMainMenuRyouri.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataMainMenuRyouri : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIItemItemData> menuItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText detailName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRyouriSyokuzaiUI> detailSyokuzaiList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float detailStarNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool detailIsShowCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText harukaText;
    
    UMacanUIDataMainMenuRyouri();

    UFUNCTION(BlueprintCallable)
    void OnClick_ListEntry(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void MouseOver_ListEntry(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool IsNeedUpdateThisUI(EMainMenuRyouriUI uiType, EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    int32 GetWheelNum();
    
    UFUNCTION(BlueprintCallable)
    void FinishUpdateUI(EMainMenuRyouriUI uiType);
    
};


#pragma once
#include "CoreMinimal.h"
#include "CommerceEntryData.h"
#include "CommercePropertyData.h"
#include "EMainMenuCommerceUI.h"
#include "EUIResultOnOrOff.h"
#include "MacanUIData.h"
#include "MacanUIDataMainMenuCommerce.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataMainMenuCommerce : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommercePropertyData PropertyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommerceEntryData> menuItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> listAscText00;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> listAscText01;
    
    UMacanUIDataMainMenuCommerce();

    UFUNCTION(BlueprintCallable)
    bool IsNeedUpdateThisUI(EMainMenuCommerceUI uiType, EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsNeedUpdate(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void FinishUpdateUI(EMainMenuCommerceUI uiType);
    
};


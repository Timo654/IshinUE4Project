#pragma once
#include "CoreMinimal.h"
#include "EUIMMItemTabType.h"
#include "EUIResultNecessaryOrUnnecessary.h"
#include "EUIResultValidOrInvalid.h"
#include "MacanUIData.h"
#include "UIEquipItemData.h"
#include "UIItemItemData.h"
#include "MacanUIDataItemCommon.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataItemCommon : public UMacanUIData {
    GENERATED_BODY()
public:
    UMacanUIDataItemCommon();

    UFUNCTION(BlueprintCallable)
    static EUIMMItemTabType UIFuncUIItemItemDataGetItemTabType(UPARAM(Ref) FUIItemItemData& refData);
    
    UFUNCTION(BlueprintCallable)
    static int32 UIFuncUIItemItemDataGetItemNumID(UPARAM(Ref) FUIItemItemData& refData);
    
    UFUNCTION(BlueprintCallable)
    static int32 UIFuncUIItemItemDataGetInvalidItemNumID();
    
    UFUNCTION(BlueprintCallable)
    static bool UIFuncUIItemItemDataCheckZeroDisp(UPARAM(Ref) FUIItemItemData& refData, EUIResultNecessaryOrUnnecessary& result);
    
    UFUNCTION(BlueprintCallable)
    static bool UIFuncItemNumIDIsValid(int32 inNumID, EUIResultValidOrInvalid& result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void UIFuncItemDataToEquipItemData(UPARAM(Ref) FUIItemItemData& refData, FUIEquipItemData& refOutData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIItemItemData UIFuncItemDataAddItemNumID(FUIItemItemData inData, int32 inNumID);
    
};


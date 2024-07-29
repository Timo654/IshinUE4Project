#pragma once
#include "CoreMinimal.h"
#include "EUIKajiyaCreateRightWidgetsType.h"
#include "EUIKajiyaWeaponsAndArmorType.h"
#include "EUIResultSuccessOrFailed.h"
#include "EUIResultValidOrInvalid.h"
#include "EUIResultYesOrNo.h"
#include "MacanUIData.h"
#include "UIEquipItemData.h"
#include "UIKajiyaHammerData.h"
#include "UIKajiyaTreeItemData.h"
#include "MacanUIDataEquipmentCommon.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataEquipmentCommon : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIKajiyaCreateRightWidgetsType currentCreateRightWidgetsType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isQuickRightWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 creatitionCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool creationCostIsEnough;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIKajiyaWeaponsAndArmorType currentDstType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 currentRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIEquipItemData equipItemDataDst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIEquipItemData equipItemDataDetailMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUIKajiyaHammerData> arrayHammerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUIKajiyaTreeItemData> arrayTreeItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIKajiyaWeaponsAndArmorType currentTreeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 lastTreeTypeNum;
    
    UMacanUIDataEquipmentCommon();

    UFUNCTION(BlueprintCallable)
    static bool UIFuncUIEquipItemNumIDIsValid(int32 inNumID, EUIResultValidOrInvalid& result);
    
    UFUNCTION(BlueprintCallable)
    static int32 UIFuncUIEquipItemDataGetInvalidItemNumID();
    
    UFUNCTION(BlueprintCallable)
    static void UIFuncEquipItemDataSetItemNumID(UPARAM(Ref) FUIEquipItemData& refData, int32 inNumID);
    
    UFUNCTION(BlueprintCallable)
    static void UIFuncEquipItemDataIsValid(UPARAM(Ref) FUIEquipItemData& refData, EUIResultValidOrInvalid& result);
    
    UFUNCTION(BlueprintCallable)
    static void UIFuncEquipItemDataIsHave3DModelGetPoolCarry(UPARAM(Ref) FUIEquipItemData& refData, EUIResultYesOrNo& result);
    
    UFUNCTION(BlueprintCallable)
    static void UIFuncEquipItemDataIsHave3DModel(UPARAM(Ref) FUIEquipItemData& refData, EUIResultYesOrNo& result);
    
    UFUNCTION(BlueprintCallable)
    static void UIFuncEquipItemDataIsBullet(UPARAM(Ref) FUIEquipItemData& refData, EUIResultYesOrNo& result);
    
    UFUNCTION(BlueprintCallable)
    static int32 UIFuncEquipItemDataGetItemNumID(UPARAM(Ref) FUIEquipItemData& refData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIEquipItemData UIFuncEquipItemDataAddItemNumID(FUIEquipItemData inData, int32 inNumID);
    
    UFUNCTION(BlueprintCallable)
    int32 FindTreeItemDataIndex(EUIResultSuccessOrFailed& result, FName TargetId);
    
};


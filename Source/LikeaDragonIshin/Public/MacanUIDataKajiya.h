#pragma once
#include "CoreMinimal.h"
#include "EUIKajiyaBfType.h"
#include "EUIKajiyaCreateRightWidgetsType.h"
#include "EUIKajiyaPowerUpLeftWidgetsType.h"
#include "EUIKajiyaPowerUpRightWidgetsType.h"
#include "EUIResultOnOrOff.h"
#include "EUIResultSuccessOrFailed.h"
#include "EUIState.h"
#include "EUITextWindowType.h"
#include "MacanUIDataEquipmentCommon.h"
#include "UIBtnGuideItemData.h"
#include "UIEquipItemData.h"
#include "UIEquipItemDataArray.h"
#include "UIItemItemDataArray.h"
#include "UIKajiyaAbilityData.h"
#include "UIKajiyaCreateResultLevelData.h"
#include "UIKajiyaDisassemblyTabData.h"
#include "UIKajiyaLevelInfoData.h"
#include "UIKajiyaTopMenuData.h"
#include "MacanUIDataKajiya.generated.h"

class UMacanScrollBox;

UCLASS(Blueprintable)
class UMacanUIDataKajiya : public UMacanUIDataEquipmentCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 bfData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EUIKajiyaBfType, EUIState> mapUIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUIKajiyaAbilityData> arrayAbilityMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUIKajiyaAbilityData> arrayAbilitySub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isForcusedYesMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isSelectedYesNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUITextWindowType textWindowType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUIBtnGuideItemData> arrayBtnData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 shojiNumNow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 shojiNumMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 topMenuFocusedIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool topMenuPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIKajiyaTopMenuData topMenuData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIKajiyaPowerUpRightWidgetsType currentPowerUpRightWidgetsType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIKajiyaPowerUpLeftWidgetsType currentPowerUpLeftWidgetsType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isQuickLeftWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIEquipItemData equipItemDataRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIEquipItemData equipItemDataSrc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIEquipItemData equipItemDataDetailSub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIEquipItemDataArray equipItemDataRightArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIEquipItemDataArray equipItemDataLeftArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIItemItemDataArray materialItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIKajiyaCreateResultLevelData createResultLevelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PowerUpCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isPowerupCostColorRed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText powerupItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 powerupSuccessPercentageNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState powerupDecideButtonUIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUIKajiyaDisassemblyTabData> arrayDisassemblyTabData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 disassemblyTotalNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUIKajiyaLevelInfoData> arrayLevelInfoData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIItemItemDataArray disassemblyMainItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIItemItemDataArray disassemblySubItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float disassemblyTotalScrollOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float disassemblyTotalScrollOffsetOfEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMacanScrollBox* pDisassemblyTotalScrollBox;
    
    UMacanUIDataKajiya();

    UFUNCTION(BlueprintCallable)
    void UpdateYesNo(bool isForcedYes, bool isSelected);
    
    UFUNCTION(BlueprintCallable)
    void UpdateTopMenuFocusedIndex(int32 inIndex, bool IsPressed);
    
    UFUNCTION(BlueprintCallable)
    void UpdateShojiNum(int32 inNow, int32 inMax);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePowerUpRightWidgetsType(EUIKajiyaPowerUpRightWidgetsType inType, bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePowerUpLeftWidgetsType(EUIKajiyaPowerUpLeftWidgetsType inType, bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMessage(UPARAM(Ref) FText& inMessage, EUITextWindowType inType);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateDisassemblyTotalScrollOffset(float InOffset);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCreateRightWidgetsType(EUIKajiyaCreateRightWidgetsType inType, bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    void SetFlag(EUIKajiyaBfType Type);
    
    UFUNCTION(BlueprintCallable)
    void OpenWidget(EUIKajiyaBfType inType, bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    bool IsOnFlag(EUIResultOnOrOff& result, EUIKajiyaBfType Type);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool GetDisassemblyTotalScrollOffsets();
    
    UFUNCTION(BlueprintCallable)
    EUIState FindUIState(EUIResultSuccessOrFailed& result, EUIKajiyaBfType inType);
    
    UFUNCTION(BlueprintCallable)
    void DelFlag(EUIKajiyaBfType Type);
    
    UFUNCTION(BlueprintCallable)
    void CloseWidget(EUIKajiyaBfType inType, bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    bool CheckReplaceAndSetCurrentSelectionItemPool();
    
};


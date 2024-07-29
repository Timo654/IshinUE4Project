#pragma once
#include "CoreMinimal.h"
#include "EUIKajiyaCreateRightWidgetsType.h"
#include "EUIMMEquipmentBfType.h"
#include "EUIMMEquipmentShojiSortType.h"
#include "EUIMMEquipmentShojiType.h"
#include "EUIResultOnOrOff.h"
#include "EUIState.h"
#include "MacanUIDataEquipmentCommon.h"
#include "UIBtnGuideItemData.h"
#include "UIEquipItemData.h"
#include "UIEquipItemDataArray.h"
#include "UIItemItemDataArray.h"
#include "MacanUIDataMainMenuEquipment.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataMainMenuEquipment : public UMacanUIDataEquipmentCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 bfData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EUIMMEquipmentBfType, EUIState> mapUIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EUIMMEquipmentBfType, FUIEquipItemDataArray> mapItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIMMEquipmentShojiType currentShojiType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIMMEquipmentShojiSortType currentSortType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUIBtnGuideItemData> arrayBtnData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 shojiNumNow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 shojiNumMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIItemItemDataArray materialItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool enableDetailArrowL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool enableDetailArrowR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 updateSelectionStartIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 updateSelectionCreateNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 playingAnimOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 playingAnimClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 playingAnimBlink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 playingAnimEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 playingAnimRemoveEquipped;
    
    UMacanUIDataMainMenuEquipment();

    UFUNCTION(BlueprintCallable)
    void UpdateShojiNum(int32 inNow, int32 inMax);
    
    UFUNCTION(BlueprintCallable)
    void UpdateSelectionItemDataTerm();
    
    UFUNCTION(BlueprintCallable)
    void UpdateSelectionItemDataProc(int32 start_index, int32 create_num);
    
    UFUNCTION(BlueprintCallable)
    void UpdateSelectionItemDataPrep(UPARAM(Ref) TArray<FUIEquipItemData>& inArray, EUIMMEquipmentShojiType inShojiType, EUIMMEquipmentShojiSortType inSortType);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMessage(UPARAM(Ref) FText& inMessage);
    
    UFUNCTION(BlueprintCallable)
    void UpdateItemData(EUIMMEquipmentBfType inType, UPARAM(Ref) TArray<FUIEquipItemData>& inArray);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCreateRightWidgetsType(EUIKajiyaCreateRightWidgetsType inType, bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    void UpdateButtonInfo(UPARAM(Ref) TArray<FUIBtnGuideItemData>& inArray);
    
    UFUNCTION(BlueprintCallable)
    void SetFlag(EUIMMEquipmentBfType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentSortType(EUIMMEquipmentShojiSortType inType);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentShojiType(EUIMMEquipmentShojiType inType);
    
    UFUNCTION(BlueprintCallable)
    void OpenWidget(EUIMMEquipmentBfType inType, bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    bool IsOnFlag(EUIResultOnOrOff& result, EUIMMEquipmentBfType Type);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void DelFlag(EUIMMEquipmentBfType Type);
    
    UFUNCTION(BlueprintCallable)
    void CloseWidget(EUIMMEquipmentBfType inType, bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    bool CheckReplaceAndSetCurrentSelectionItemPool();
    
};


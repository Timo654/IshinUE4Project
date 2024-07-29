#pragma once
#include "CoreMinimal.h"
#include "EUIMMItemBfType.h"
#include "EUIMMItemSortType.h"
#include "EUIMMItemTabType.h"
#include "EUIResultOnOrOff.h"
#include "EUIState.h"
#include "MacanUIDataItemCommon.h"
#include "UIItemItemData.h"
#include "UIItemItemDataArray.h"
#include "MacanUIDataMainMenuItem.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class UMacanUIDataMainMenuItem : public UMacanUIDataItemCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 bfData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EUIMMItemBfType, EUIState> mapUIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EUIMMItemBfType, FUIItemItemDataArray> mapItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText popupMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 popupIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIMMItemTabType currentTabType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIMMItemSortType currentSortType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<bool> arrayBadgeTabs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 playingAnimOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 playingAnimClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 playingAnimBlink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* pTextureValuables;
    
    UMacanUIDataMainMenuItem();

    UFUNCTION(BlueprintCallable)
    void UpdateTextureValuables(UTexture2D* inTexture2D);
    
    UFUNCTION(BlueprintCallable)
    void UpdateSortType(EUIMMItemSortType inType);
    
    UFUNCTION(BlueprintCallable)
    void UpdateItemData(UPARAM(Ref) TArray<FUIItemItemData>& inArray, int32 inColmun);
    
    UFUNCTION(BlueprintCallable)
    void UpdateBadgeTabs(bool Carry, bool Crops, bool Fish, bool Material, bool Valuables);
    
    UFUNCTION(BlueprintCallable)
    void PlayPopupUsedMessage(int32 inIndex, UPARAM(Ref) FText& inMessage);
    
    UFUNCTION(BlueprintCallable)
    void OpenWidget(EUIMMItemBfType inType, bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    bool IsOnFlag(EUIResultOnOrOff& result, EUIMMItemBfType Type);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void DelFlag(EUIMMItemBfType Type);
    
    UFUNCTION(BlueprintCallable)
    void CloseWidget(EUIMMItemBfType inType, bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    bool CheckReplaceAndSetCurrentSelectionItemPool();
    
};


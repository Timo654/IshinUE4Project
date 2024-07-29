#pragma once
#include "CoreMinimal.h"
#include "EUIMoneyIconType.h"
#include "EUIResultOnOrOff.h"
#include "EUISMShopBfType.h"
#include "EUIState.h"
#include "EUITextWindowType.h"
#include "MacanUIDataItemCommon.h"
#include "UIItemItemData.h"
#include "UIItemItemDataArray.h"
#include "UItemTabCommonData.h"
#include "MacanUIDataShopMenuShop.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataShopMenuShop : public UMacanUIDataItemCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 bfData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EUISMShopBfType, EUIState> mapUIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EUISMShopBfType, FUIItemItemDataArray> mapItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText directMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isForcusedYesMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isSelectedYesNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 myInventoryPageMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 myInventoryPageNow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 totalPrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 totalOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUITextWindowType textWindowType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIMoneyIconType myMoneyIconType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUItemTabCommonData> arrayTabData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isTabChangeInputR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isNotPlayTabChangeInputAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 playingAnimOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 playingAnimClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 playingAnimBlink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 playingAnimUnique0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 playingAnimUnique1;
    
    UMacanUIDataShopMenuShop();

    UFUNCTION(BlueprintCallable)
    void UpdateYesNo(bool isForcedYes, bool isSelected);
    
    UFUNCTION(BlueprintCallable)
    void UpdateTotalPrice(int32 inTotalPrice);
    
    UFUNCTION(BlueprintCallable)
    void UpdateTotalOrder(int32 inTotalPrice);
    
    UFUNCTION(BlueprintCallable)
    void UpdateShopInventory(UPARAM(Ref) TArray<FUIItemItemData>& inArray);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMyInventory(UPARAM(Ref) TArray<FUIItemItemData>& inArray, int32 pageNow, int32 paseMax);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMessage(UPARAM(Ref) FText& inMessage, EUITextWindowType inType);
    
    UFUNCTION(BlueprintCallable)
    void UpdateBanner(EUIState inUIState);
    
    UFUNCTION(BlueprintCallable)
    void SetFlag(EUISMShopBfType Type);
    
    UFUNCTION(BlueprintCallable)
    void OpenMenu(bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    bool IsOnFlag(EUIResultOnOrOff& result, EUISMShopBfType Type);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void DelFlag(EUISMShopBfType Type);
    
    UFUNCTION(BlueprintCallable)
    void CloseMenu(bool isQuick);
    
};


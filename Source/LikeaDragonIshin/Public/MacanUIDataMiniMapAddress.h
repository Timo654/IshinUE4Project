#pragma once
#include "CoreMinimal.h"
#include "EUIMiniMapAddressBfType.h"
#include "EUIResultOnOrOff.h"
#include "EUIState.h"
#include "MacanUIData.h"
#include "MacanUIDataMiniMapAddress.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataMiniMapAddress : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 bfData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EUIMiniMapAddressBfType, EUIState> mapUIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText textAddrass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ReqDestinationArrival;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 playingAnimOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 playingAnimClose;
    
    UMacanUIDataMiniMapAddress();

    UFUNCTION(BlueprintCallable)
    void UpdateAddressText(const FText& InText);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetFlag(EUIMiniMapAddressBfType Type);
    
public:
    UFUNCTION(BlueprintCallable)
    void OpenWidget(EUIMiniMapAddressBfType inType, bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    bool IsOnFlag(EUIResultOnOrOff& result, EUIMiniMapAddressBfType Type);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void DelFlag(EUIMiniMapAddressBfType Type);
    
    UFUNCTION(BlueprintCallable)
    void CloseWidget(EUIMiniMapAddressBfType inType, bool isQuick);
    
};


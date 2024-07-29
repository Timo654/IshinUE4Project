#pragma once
#include "CoreMinimal.h"
#include "EUIMMOptionBfType.h"
#include "EUIResultOnOrOff.h"
#include "EUIResultSuccessOrFailed.h"
#include "EUIState.h"
#include "MacanUIData.h"
#include "UIOptionItemDataArray.h"
#include "MacanUIDataMainMenuOption.generated.h"

class UMacanUserWidget_Keyconfig;

UCLASS(Blueprintable)
class UMacanUIDataMainMenuOption : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 bfData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EUIMMOptionBfType, EUIState> mapUIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EUIMMOptionBfType, FUIOptionItemDataArray> mapItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 playingAnimOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 playingAnimClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 playingAnimBlink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_Keyconfig* Keyconfig;
    
    UMacanUIDataMainMenuOption();

    UFUNCTION(BlueprintCallable)
    void SetFlag(EUIMMOptionBfType Type);
    
    UFUNCTION(BlueprintCallable)
    void OpenWidget(EUIMMOptionBfType inType, bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    bool IsOnFlag(EUIResultOnOrOff& result, EUIMMOptionBfType Type);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    int32 GetColorAdjustmentValue();
    
    UFUNCTION(BlueprintCallable)
    EUIState FindUIState(EUIResultSuccessOrFailed& result, EUIMMOptionBfType inType);
    
    UFUNCTION(BlueprintCallable)
    void DelFlag(EUIMMOptionBfType Type);
    
    UFUNCTION(BlueprintCallable)
    void CloseWidget(EUIMMOptionBfType inType, bool isQuick);
    
};


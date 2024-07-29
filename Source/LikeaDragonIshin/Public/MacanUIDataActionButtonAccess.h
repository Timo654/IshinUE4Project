#pragma once
#include "CoreMinimal.h"
#include "EMacanUIDataActionButtonAccessBfType.h"
#include "EUIResultOnOrOff.h"
#include "EUIState.h"
#include "MacanUIData.h"
#include "MacanUIDataActionButtonAccess.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataActionButtonAccess : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 bfData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EMacanUIDataActionButtonAccessBfType, EUIState> mapUIState;
    
    UMacanUIDataActionButtonAccess();

    UFUNCTION(BlueprintCallable)
    void OpenWidget(EMacanUIDataActionButtonAccessBfType inType, bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    bool IsOnFlag(EUIResultOnOrOff& result, EMacanUIDataActionButtonAccessBfType Type);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void DelFlag(EMacanUIDataActionButtonAccessBfType Type);
    
    UFUNCTION(BlueprintCallable)
    void CloseWidget(EMacanUIDataActionButtonAccessBfType inType, bool isQuick);
    
};


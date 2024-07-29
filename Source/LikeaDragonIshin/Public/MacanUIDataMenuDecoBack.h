#pragma once
#include "CoreMinimal.h"
#include "EMUIDMenuDecoBackBfType.h"
#include "EUIResultOnOrOff.h"
#include "EUIState.h"
#include "MacanUIData.h"
#include "MacanUIDataMenuDecoBack.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataMenuDecoBack : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 bfData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState mainUIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 playingAnimOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 playingAnimClose;
    
    UMacanUIDataMenuDecoBack();

    UFUNCTION(BlueprintCallable)
    void SetFlag(EMUIDMenuDecoBackBfType Type);
    
    UFUNCTION(BlueprintCallable)
    void OpenWidget();
    
    UFUNCTION(BlueprintCallable)
    bool IsOnFlag(EUIResultOnOrOff& result, EMUIDMenuDecoBackBfType Type);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void DelFlag(EMUIDMenuDecoBackBfType Type);
    
    UFUNCTION(BlueprintCallable)
    void CloseWidget();
    
};


#pragma once
#include "CoreMinimal.h"
#include "EUIGameOverBfType.h"
#include "EUIResultOnOrOff.h"
#include "EUIState.h"
#include "MacanUIData.h"
#include "MacanUIDataGameOver.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataGameOver : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 bfData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EUIGameOverBfType, EUIState> mapUIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 playingAnimOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 playingAnimClose;
    
    UMacanUIDataGameOver();

    UFUNCTION(BlueprintCallable)
    void SetFlag(EUIGameOverBfType Type);
    
    UFUNCTION(BlueprintCallable)
    void OpenWidget(EUIGameOverBfType inType, bool isQuick);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpenAnimPlaying();
    
    UFUNCTION(BlueprintCallable)
    bool IsOnFlag(EUIResultOnOrOff& result, EUIGameOverBfType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoopAnimPlaying();
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCloseAnimPlaying();
    
    UFUNCTION(BlueprintCallable)
    void DelFlag(EUIGameOverBfType Type);
    
    UFUNCTION(BlueprintCallable)
    void CloseWidget(EUIGameOverBfType inType, bool isQuick);
    
};


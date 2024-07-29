#pragma once
#include "CoreMinimal.h"
#include "EUIMMJibikiBfType.h"
#include "EUIResultOnOrOff.h"
#include "EUIResultSuccessOrFailed.h"
#include "EUIState.h"
#include "MacanUIData.h"
#include "MainMenuJibikiInfo.h"
#include "MacanUIDataMainMenuJibiki.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataMainMenuJibiki : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 bfData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMainMenuJibikiInfo> itemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 currentIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EUIMMJibikiBfType, EUIState> mapUIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float scrollRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 playingAnimOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 playingAnimClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 playingAnimBlink;
    
    UMacanUIDataMainMenuJibiki();

    UFUNCTION(BlueprintCallable)
    void SetFlag(EUIMMJibikiBfType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrent(int32 newIndex);
    
    UFUNCTION(BlueprintCallable)
    void OpenWidget(EUIMMJibikiBfType inType, bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    bool IsOnFlag(EUIResultOnOrOff& result, EUIMMJibikiBfType Type);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    EUIState FindUIState(EUIResultSuccessOrFailed& result, EUIMMJibikiBfType inType);
    
    UFUNCTION(BlueprintCallable)
    void DelFlag(EUIMMJibikiBfType Type);
    
    UFUNCTION(BlueprintCallable)
    void CloseWidget(EUIMMJibikiBfType inType, bool isQuick);
    
};


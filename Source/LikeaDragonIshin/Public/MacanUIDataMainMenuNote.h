#pragma once
#include "CoreMinimal.h"
#include "EUIMMNoteBfType.h"
#include "EUIResultOnOrOff.h"
#include "EUIResultSuccessOrFailed.h"
#include "EUIState.h"
#include "MacanUIData.h"
#include "MainMenuNoteInfo.h"
#include "MacanUIDataMainMenuNote.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataMainMenuNote : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 bfData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMainMenuNoteInfo> itemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 currentIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EUIMMNoteBfType, EUIState> mapUIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float scrollRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float maxScrollOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText nameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText bodyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isNew;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 playingAnimOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 playingAnimClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 playingAnimBlink;
    
    UMacanUIDataMainMenuNote();

    UFUNCTION(BlueprintCallable)
    void SetFlag(EUIMMNoteBfType Type);
    
    UFUNCTION(BlueprintCallable)
    void OpenWidget(EUIMMNoteBfType inType, bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    bool IsOnFlag(EUIResultOnOrOff& result, EUIMMNoteBfType Type);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    EUIState FindUIState(EUIResultSuccessOrFailed& result, EUIMMNoteBfType inType);
    
    UFUNCTION(BlueprintCallable)
    void DelFlag(EUIMMNoteBfType Type);
    
    UFUNCTION(BlueprintCallable)
    void CloseWidget(EUIMMNoteBfType inType, bool isQuick);
    
};


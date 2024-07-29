#pragma once
#include "CoreMinimal.h"
#include "EUIMacanUIDataChapterTitleAnimType.h"
#include "EUIMacanUIDataChapterTitleBfType.h"
#include "EUIResultOnOrOff.h"
#include "EUIState.h"
#include "MacanUIData.h"
#include "MacanUIDataChapterTitle.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataChapterTitle : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 bfData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EUIMacanUIDataChapterTitleBfType, EUIState> mapUIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 chapterNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIMacanUIDataChapterTitleAnimType animType;
    
    UMacanUIDataChapterTitle();

    UFUNCTION(BlueprintCallable)
    void PlayAnim(int32 inChapterNum, EUIMacanUIDataChapterTitleAnimType inAnimType);
    
    UFUNCTION(BlueprintCallable)
    bool IsOnFlag(EUIResultOnOrOff& result, EUIMacanUIDataChapterTitleBfType Type);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void DelFlag(EUIMacanUIDataChapterTitleBfType Type);
    
};


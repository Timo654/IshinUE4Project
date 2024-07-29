#pragma once
#include "CoreMinimal.h"
#include "EUIMainMenuKyoukaBfType.h"
#include "EUIResultOnOrOff.h"
#include "EUIResultSuccessOrFailed.h"
#include "EUIResultVisibleOrInvisible.h"
#include "EUIState.h"
#include "MacanUIData.h"
#include "UIMainMenuKyoukaAbilityDataArray.h"
#include "UIMainMenuKyoukaStatusData.h"
#include "MacanUIDataMainMenuKyouka.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class UMacanUIDataMainMenuKyouka : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 bfData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EUIMainMenuKyoukaBfType, EUIState> mapUIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUIMainMenuKyoukaAbilityDataArray> arrayAbilityDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIMainMenuKyoukaStatusData kyoukaStatusData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 playingAnimOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 playingAnimClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 playingAnimBlink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isPlayingAnimAbilityLevelUp;
    
    UMacanUIDataMainMenuKyouka();

    UFUNCTION(BlueprintCallable)
    void SetFlag(EUIMainMenuKyoukaBfType Type);
    
    UFUNCTION(BlueprintCallable)
    void OpenWidget(EUIMainMenuKyoukaBfType inType, bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    bool IsVisibleStyleIconSword(EUIResultVisibleOrInvisible& result, int32 inCategory, int32 inIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsVisibleStyleIconSude(EUIResultVisibleOrInvisible& result, int32 inCategory, int32 inIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsVisibleStyleIconSpecial(EUIResultVisibleOrInvisible& result, int32 inCategory, int32 inIndex);
    
    UFUNCTION(BlueprintCallable)
    void IsVisibleStyleIcons(int32 inCategory, int32 inIndex, bool& sude, bool& sword, bool& Gun, bool& ranbu, bool& Special);
    
    UFUNCTION(BlueprintCallable)
    bool IsVisibleStyleIconRanbu(EUIResultVisibleOrInvisible& result, int32 inCategory, int32 inIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsVisibleStyleIconGun(EUIResultVisibleOrInvisible& result, int32 inCategory, int32 inIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsOnFlag(EUIResultOnOrOff& result, EUIMainMenuKyoukaBfType Type);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    FText GetSkillName(int32 inCategory, int32 inIndex);
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UTexture2D> GetSetumeiTextureSoftPtr(int32 inCategory, int32 inIndex);
    
    UFUNCTION(BlueprintCallable)
    FString GetSetumeiTextureName(int32 inCategory, int32 inIndex);
    
    UFUNCTION(BlueprintCallable)
    FText GetExplain(int32 inCategory, int32 inIndex);
    
    UFUNCTION(BlueprintCallable)
    FText GetControl(int32 inCategory, int32 inIndex);
    
    UFUNCTION(BlueprintCallable)
    EUIState FindUIState(EUIResultSuccessOrFailed& result, EUIMainMenuKyoukaBfType inType);
    
    UFUNCTION(BlueprintCallable)
    void DelFlag(EUIMainMenuKyoukaBfType Type);
    
    UFUNCTION(BlueprintCallable)
    void CloseWidget(EUIMainMenuKyoukaBfType inType, bool isQuick);
    
};


#pragma once
#include "CoreMinimal.h"
#include "EUIPhotoModeBfType.h"
#include "EUIResultOnOrOff.h"
#include "EUIResultSuccessOrFailed.h"
#include "EUIState.h"
#include "MacanUIData.h"
#include "UIPhotoModeSliderOrFilterData.h"
#include "UIPhotoModeStampDataDeploy.h"
#include "UIPhotoModeStampDataList.h"
#include "UIPhotoModeTabData.h"
#include "MacanUIDataPhotoMode.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataPhotoMode : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 bfData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EUIPhotoModeBfType, EUIState> mapUIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUIPhotoModeTabData> arrayTabData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUIPhotoModeStampDataList> arrayStampDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUIPhotoModeStampDataDeploy> arrayStampDataDeploy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUIPhotoModeSliderOrFilterData> arraySliderOrFilterData;
    
    UMacanUIDataPhotoMode();

    UFUNCTION(BlueprintCallable)
    void UpdateTabData(UPARAM(Ref) TArray<FUIPhotoModeTabData>& inArray);
    
    UFUNCTION(BlueprintCallable)
    void UpdateStampDataList(UPARAM(Ref) TArray<FUIPhotoModeStampDataList>& inArray);
    
    UFUNCTION(BlueprintCallable)
    void UpdateStampDataDeploy(UPARAM(Ref) TArray<FUIPhotoModeStampDataDeploy>& inArray);
    
    UFUNCTION(BlueprintCallable)
    void UpdateSliderOrFilterData(UPARAM(Ref) TArray<FUIPhotoModeSliderOrFilterData>& inArray);
    
    UFUNCTION(BlueprintCallable)
    void SetFlag(EUIPhotoModeBfType Type);
    
    UFUNCTION(BlueprintCallable)
    void OpenWidget(EUIPhotoModeBfType inType, bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    bool IsOnFlag(EUIResultOnOrOff& result, EUIPhotoModeBfType Type);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    EUIState GetUIState(EUIResultSuccessOrFailed& result, EUIPhotoModeBfType inType);
    
    UFUNCTION(BlueprintCallable)
    void DelFlag(EUIPhotoModeBfType Type);
    
    UFUNCTION(BlueprintCallable)
    void CloseWidget(EUIPhotoModeBfType inType, bool isQuick);
    
};


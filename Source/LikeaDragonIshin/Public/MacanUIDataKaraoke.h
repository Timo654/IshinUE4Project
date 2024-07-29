#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMngKaraokeUIType.h"
#include "EUIResultOnOrOff.h"
#include "EUIState.h"
#include "MacanUIData.h"
#include "MacanUIDataKaraoke.generated.h"

class UMUW_MngKaraokeTimingBar;
class UMacanUserWidget;
class UMacanUserWidget_MngKaraokeMarker;

UCLASS(Blueprintable)
class UMacanUIDataKaraoke : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<EUIState> karaokeUIStateList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 markerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 selectMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> linePositions;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_MngKaraokeMarker* m_pCSEMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMUW_MngKaraokeTimingBar* m_pTimingBarWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* m_pLines;
    
public:
    UMacanUIDataKaraoke();

    UFUNCTION(BlueprintCallable)
    bool SetTitleVisible(EUIState State);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetTimingBarWidget(UMUW_MngKaraokeTimingBar* Widget);
    
public:
    UFUNCTION(BlueprintCallable)
    bool SetMusicTitle();
    
    UFUNCTION(BlueprintCallable)
    bool SetMarkerVisible();
    
    UFUNCTION(BlueprintCallable)
    bool SetMarkerIndex(int32 mode);
    
    UFUNCTION(BlueprintCallable)
    void SetLinePosition(FVector2D position);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetKaraokeMarkerWidget(UMacanUserWidget_MngKaraokeMarker* Widget);
    
    UFUNCTION(BlueprintCallable)
    void SetKaraokeLinesWidget(UMacanUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyVisibleTitle(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyVisibleMarker(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyVisible(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyTitle(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyMarker(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EUIState GetUIState(EMngKaraokeUIType Type);
    
    UFUNCTION(BlueprintCallable)
    UMUW_MngKaraokeTimingBar* GetKaraokeTimingBarWidget();
    
    UFUNCTION(BlueprintCallable)
    UMacanUserWidget_MngKaraokeMarker* GetKaraokeMarkerWidget();
    
    UFUNCTION(BlueprintCallable)
    UMacanUserWidget* GetKaraokeLinesWidget();
    
private:
    UFUNCTION(BlueprintCallable)
    void DelBfVisibleDirtyTitle();
    
    UFUNCTION(BlueprintCallable)
    void DelBfVisibleDirtyMarker();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyTitle();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyMarker();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirty();
    
};


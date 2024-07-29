#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EUIState.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_MngKaraokeLine.generated.h"

class UMacanUserWidget_MngKaraokeButton;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_MngKaraokeLine : public UMacanUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FWidgetKaraokeLineUpdateVisible);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FWidgetKaraokeLineInit);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 displayNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 pageNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 lineNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float progressRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float barLengthRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float maxRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 lyricLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText lyricText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMacanUserWidget_MngKaraokeButton*> buttonList;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWidgetKaraokeLineInit OnDelegateInit;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWidgetKaraokeLineUpdateVisible OnDelegateUpdateVisivble;
    
    UMacanUserWidget_MngKaraokeLine();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateVisible(EUIState State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRatioEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleFude(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitEvent(int32 music);
    
    UFUNCTION(BlueprintCallable)
    int32 GetLyricType();
    
};


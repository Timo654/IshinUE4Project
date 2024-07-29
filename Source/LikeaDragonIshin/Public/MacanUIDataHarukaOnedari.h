#pragma once
#include "CoreMinimal.h"
#include "MacanUIData.h"
#include "MacanUIDataHarukaOnedari.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataHarukaOnedari : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPrepared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isVisibleGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isUpdateGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isRankUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isPlayingGauge;
    
    UMacanUIDataHarukaOnedari();

    UFUNCTION(BlueprintCallable)
    void SetVisibleGauge(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayingRankUp(bool in);
    
    UFUNCTION(BlueprintCallable)
    void ResetUpdateGaugeFlag();
    
    UFUNCTION(BlueprintCallable)
    void ResetLevelUpFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRank();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGauge();
    
};


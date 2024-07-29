#pragma once
#include "CoreMinimal.h"
#include "BltBuffStatsBuffIconEntity.h"
#include "EBtlBuffDebuffStatsType.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_BtlBuffStats.generated.h"

class UHorizontalBox;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BtlBuffStats : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* box_stats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* box_buff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* box_debuff;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBltBuffStatsBuffIconEntity> stats_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBltBuffStatsBuffIconEntity> buff_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBltBuffStatsBuffIconEntity> debuff_list;
    
public:
    UMacanUserWidget_BtlBuffStats();

    UFUNCTION(BlueprintCallable)
    void gain(EBtlBuffDebuffStatsType Type, float gauge_val);
    
};


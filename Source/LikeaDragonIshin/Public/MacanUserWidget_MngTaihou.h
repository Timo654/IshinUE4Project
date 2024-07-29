#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_MngTaihou.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_MngTaihou : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_gauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_shot_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_wait_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_curse_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_best_score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_is_best_upda;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_sight_ratio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_switch_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_switch_comp_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_gauge_gold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_gauge_silver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_just_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_chip_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_total_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_slash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_gauge_current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_rank_change;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_now_rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_curse_idx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_start_caption_state;
    
    UMacanUserWidget_MngTaihou();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ViewResultBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateComponentBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowAimBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetShotNumBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBorderBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAimPosBP(FVector target_position);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayStartCaptionBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MedalAnimationBP();
    
    UFUNCTION(BlueprintCallable)
    void MacanUpdateComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void KousinAnimationBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideAimPosBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BreakBallBP();
    
};


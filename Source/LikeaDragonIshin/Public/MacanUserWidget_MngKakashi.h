#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_MngKakashi.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_MngKakashi : public UMacanUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_init_anim_state;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_hajime_caption_state;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_hide_menu_anim_state;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_cursol_level;
    
public:
    UMacanUserWidget_MngKakashi();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ViewTimerBP(bool is_ultimate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ViewResultBP(int32 destroy_num, int32 bonus_num, int32 black_num, int32 red_num, int32 Score, int32 best_score, int32 star_num, bool is_best, int32 Level, int32 Index, int32 kakashi_score, int32 red_score, int32 black_score, int32 bonus_score);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ViewMenuBP(int32 course_level, int32 course_index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateComponentBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTimerBP(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStageInfoBP(int32 course_level, int32 course_index, int32 buki, int32 time_limit, int32 heat_num, int32 item_id, int32 target_score, int32 best_score);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMenuBestStarBP(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SetLevelCursolNum(int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLevelBP(int32 cursol_level);
    
    UFUNCTION(BlueprintCallable)
    void SetCursolNum(int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayStartCaptionBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideMenuBP(int32 Level);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutTimerBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutMenuBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInStarBP(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInKousinBP();
    
    UFUNCTION(BlueprintCallable)
    void ClickCursor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeStageBP(int32 cursol_stg);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeLevelBP(int32 cursol_level, int32 old_level);
    
};


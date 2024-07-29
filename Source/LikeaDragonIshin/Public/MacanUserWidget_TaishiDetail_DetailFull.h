#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget_TaishiDetailBase.h"
#include "TaishiCardDataDetail.h"
#include "TaishiCardState.h"
#include "MacanUserWidget_TaishiDetail_DetailFull.generated.h"

class UMacanTextBlock;
class UMacanUserWidget;
class UMacanUserWidget_CardMain;
class UMacanUserWidget_CoreGauge;
class UMacanUserWidget_TaishiDetail_Comment;
class UMacanUserWidget_TaishiDetail_SimpleElem;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiDetail_DetailFull : public UMacanUserWidget_TaishiDetailBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* text_Lv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* text_LvMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_CoreGauge* elem_ExpGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* text_HP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* text_Charge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* text_Skill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* text_Skill_detail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* text_Skill_Reinforce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiDetail_SimpleElem* elem_SkillStar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* text_LeaderSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* text_LeaderSkill_detail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* text_LeaderSkill_Reinforce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiDetail_SimpleElem* elem_LeaderSkillStar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiDetail_SimpleElem* elem_rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiDetail_SimpleElem* elem_awake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_CardMain* elem_card;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiDetail_Comment* elem_comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiDetail_SimpleElem* elem_Delta_Lv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiDetail_SimpleElem* elem_Delta_Hp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiDetail_SimpleElem* elem_Delta_Charge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiDetail_SimpleElem* elem_Delta_Skill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiDetail_SimpleElem* elem_Delta_LeaderSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* elem_chuseishin;
    
    UMacanUserWidget_TaishiDetail_DetailFull();

    UFUNCTION(BlueprintCallable)
    void SetState(const FTaishiCardState& State);
    
    UFUNCTION(BlueprintCallable)
    void SetData(const FTaishiCardDataDetail& Data, bool forceAvailable);
    
    UFUNCTION(BlueprintCallable)
    void overwriteComment(const FText& Comment);
    
    UFUNCTION(BlueprintCallable)
    void on();
    
    UFUNCTION(BlueprintCallable)
    void off();
    
};


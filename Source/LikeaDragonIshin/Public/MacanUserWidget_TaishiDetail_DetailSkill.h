#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget_TaishiDetailBase.h"
#include "TaishiCardDataDetail.h"
#include "MacanUserWidget_TaishiDetail_DetailSkill.generated.h"

class UMacanTextBlock;
class UMacanUserWidget_TaishiDetail_SimpleElem;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiDetail_DetailSkill : public UMacanUserWidget_TaishiDetailBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* text_Skill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* text_Skill_detail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* text_SkillReinforce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiDetail_SimpleElem* elem_SkillStar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* text_LeaderSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* text_LeaderSkill_detail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* text_LeaderSkillReinforce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_TaishiDetail_SimpleElem* elem_LeaderSkillStar;
    
    UMacanUserWidget_TaishiDetail_DetailSkill();

    UFUNCTION(BlueprintCallable)
    void SetData(const FTaishiCardDataDetail& Data);
    
    UFUNCTION(BlueprintCallable)
    void on();
    
    UFUNCTION(BlueprintCallable)
    void off();
    
};


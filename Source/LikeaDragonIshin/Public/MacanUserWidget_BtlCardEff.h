#pragma once
#include "CoreMinimal.h"
#include "ETaishiType.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_BtlCardEff.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BtlCardEff : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* on_anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* off_anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* play_anim;
    
    UMacanUserWidget_BtlCardEff();

    UFUNCTION(BlueprintCallable)
    void updateSkill(float skill);
    
    UFUNCTION(BlueprintCallable)
    void setColor(ETaishiType Type);
    
    UFUNCTION(BlueprintCallable)
    void onSkillUsed();
    
};


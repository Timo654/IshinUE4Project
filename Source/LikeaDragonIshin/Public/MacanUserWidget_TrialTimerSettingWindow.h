#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_TrialTimerSettingWindow.generated.h"

class UMacanTextBlock;
class UMacanUserWidget_BtnGuideSimpleH;
class UMacanUserWidget_ScrollArrow;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TrialTimerSettingWindow : public UMacanUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_ScrollArrow* Arrow_Top;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_ScrollArrow* Arrow_Bottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* valueText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtnGuideSimpleH* BtnGuide;
    
public:
    UMacanUserWidget_TrialTimerSettingWindow();

};


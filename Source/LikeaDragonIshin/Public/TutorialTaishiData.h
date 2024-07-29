#pragma once
#include "CoreMinimal.h"
#include "TutorialTaishiData.generated.h"

class UMacanUserWidget;
class UWidgetAnimation;

USTRUCT(BlueprintType)
struct FTutorialTaishiData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* anim_in2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* anim_out2;
    
    LIKEADRAGONISHIN_API FTutorialTaishiData();
};


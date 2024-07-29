#pragma once
#include "CoreMinimal.h"
#include "_BtnWidget.generated.h"

class UMacanTextBlock;
class UMacanUserWidget;

USTRUCT(BlueprintType)
struct F_BtnWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* w_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* w_icon;
    
    LIKEADRAGONISHIN_API F_BtnWidget();
};


#pragma once
#include "CoreMinimal.h"
#include "MacanUIDataWindowBase.h"
#include "MacanUIDataWindowTalkCenter.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataWindowTalkCenter : public UMacanUIDataWindowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText titleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText messageText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isHiddenButtonIcon;
    
    UMacanUIDataWindowTalkCenter();

};


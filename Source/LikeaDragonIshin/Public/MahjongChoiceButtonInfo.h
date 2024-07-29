#pragma once
#include "CoreMinimal.h"
#include "EUIMahjongRightButtonState.h"
#include "EWBPButtoniconType.h"
#include "MahjongChoiceButtonInfo.generated.h"

USTRUCT(BlueprintType)
struct FMahjongChoiceButtonInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EWBPButtoniconType ButtonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIMahjongRightButtonState selectState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIMahjongRightButtonState beforeSelectState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isDisp;
    
    LIKEADRAGONISHIN_API FMahjongChoiceButtonInfo();
};


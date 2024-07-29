#pragma once
#include "CoreMinimal.h"
#include "EUIKajiyaLevelInfoStateType.h"
#include "UIKajiyaLevelInfoData.generated.h"

USTRUCT(BlueprintType)
struct FUIKajiyaLevelInfoData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIKajiyaLevelInfoStateType stateType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 levelNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText contentText;
    
    LIKEADRAGONISHIN_API FUIKajiyaLevelInfoData();
};


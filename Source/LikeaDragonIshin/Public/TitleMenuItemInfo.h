#pragma once
#include "CoreMinimal.h"
#include "EUITitleMenuItemType.h"
#include "TitleMenuItemInfo.generated.h"

USTRUCT(BlueprintType)
struct FTitleMenuItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUITitleMenuItemType ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isFocused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isVisibleNewMark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPressed;
    
    LIKEADRAGONISHIN_API FTitleMenuItemInfo();
};


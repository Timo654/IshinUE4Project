#pragma once
#include "CoreMinimal.h"
#include "MngNichibuCourseItemInfo.generated.h"

USTRUCT(BlueprintType)
struct FMngNichibuCourseItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isFocused;
    
    LIKEADRAGONISHIN_API FMngNichibuCourseItemInfo();
};


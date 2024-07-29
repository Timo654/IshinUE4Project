#pragma once
#include "CoreMinimal.h"
#include "MainMenuTipsItemInfo.generated.h"

USTRUCT(BlueprintType)
struct FMainMenuTipsItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isNew;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isFocused;
    
    LIKEADRAGONISHIN_API FMainMenuTipsItemInfo();
};


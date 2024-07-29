#pragma once
#include "CoreMinimal.h"
#include "MngKaraokeFlashbackItem.generated.h"

USTRUCT(BlueprintType)
struct FMngKaraokeFlashbackItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isFocused;
    
    LIKEADRAGONISHIN_API FMngKaraokeFlashbackItem();
};


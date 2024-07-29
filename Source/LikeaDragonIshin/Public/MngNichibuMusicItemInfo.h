#pragma once
#include "CoreMinimal.h"
#include "MngNichibuMusicItemInfo.generated.h"

USTRUCT(BlueprintType)
struct FMngNichibuMusicItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText explain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isFocused;
    
    LIKEADRAGONISHIN_API FMngNichibuMusicItemInfo();
};


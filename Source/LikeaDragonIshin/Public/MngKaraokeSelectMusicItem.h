#pragma once
#include "CoreMinimal.h"
#include "MngKaraokeSelectMusicItem.generated.h"

USTRUCT(BlueprintType)
struct FMngKaraokeSelectMusicItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 songCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 topScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isFocused;
    
    LIKEADRAGONISHIN_API FMngKaraokeSelectMusicItem();
};


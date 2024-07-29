#pragma once
#include "CoreMinimal.h"
#include "MahjongProgressWindow.generated.h"

USTRUCT(BlueprintType)
struct FMahjongProgressWindow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText KyokuText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RiichiBarCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 HonbaCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RemainHaiCount;
    
    LIKEADRAGONISHIN_API FMahjongProgressWindow();
};


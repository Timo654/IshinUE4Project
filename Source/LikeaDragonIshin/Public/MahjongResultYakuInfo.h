#pragma once
#include "CoreMinimal.h"
#include "MahjongResultYakuInfo.generated.h"

USTRUCT(BlueprintType)
struct FMahjongResultYakuInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText YakuName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 HanNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isDisp;
    
    LIKEADRAGONISHIN_API FMahjongResultYakuInfo();
};


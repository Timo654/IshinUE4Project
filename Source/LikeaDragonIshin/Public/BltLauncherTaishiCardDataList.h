#pragma once
#include "CoreMinimal.h"
#include "TaishiCardData.h"
#include "BltLauncherTaishiCardDataList.generated.h"

USTRUCT(BlueprintType)
struct FBltLauncherTaishiCardDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTaishiCardData> card_data;
    
    LIKEADRAGONISHIN_API FBltLauncherTaishiCardDataList();
};


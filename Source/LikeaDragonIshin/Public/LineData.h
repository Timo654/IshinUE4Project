#pragma once
#include "CoreMinimal.h"
#include "ButtonSetData.h"
#include "LineData.generated.h"

class UMacanUserWidget_MngKaraokeButton;

USTRUCT(BlueprintType)
struct FLineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FButtonSetData> pButtonSetTbl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMacanUserWidget_MngKaraokeButton*> pCSEButtonTbl;
    
    LIKEADRAGONISHIN_API FLineData();
};


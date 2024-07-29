#pragma once
#include "CoreMinimal.h"
#include "MainMenuPreviewRowItemInfo.h"
#include "MainMenuPreviewItemInfo.generated.h"

USTRUCT(BlueprintType)
struct FMainMenuPreviewItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float completeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMainMenuPreviewRowItemInfo> rowInfos;
    
    LIKEADRAGONISHIN_API FMainMenuPreviewItemInfo();
};


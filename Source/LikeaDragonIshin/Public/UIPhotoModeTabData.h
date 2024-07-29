#pragma once
#include "CoreMinimal.h"
#include "UIPhotoModeTabData.generated.h"

USTRUCT(BlueprintType)
struct FUIPhotoModeTabData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 tabIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TabName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isForcused;
    
    LIKEADRAGONISHIN_API FUIPhotoModeTabData();
};


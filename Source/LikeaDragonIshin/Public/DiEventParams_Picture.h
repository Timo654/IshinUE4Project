#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_Picture.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FDiEventParams_Picture {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PictureType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    LIKEADRAGONISHIN_API FDiEventParams_Picture();
};


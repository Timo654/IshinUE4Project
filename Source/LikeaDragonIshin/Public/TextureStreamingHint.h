#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TextureStreamingHint.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FTextureStreamingHint : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    LIKEADRAGONISHIN_API FTextureStreamingHint();
};


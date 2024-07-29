#pragma once
#include "CoreMinimal.h"
#include "TextureChange.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FTextureChange {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture* Textures[7];
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString TextureNames[7];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SlotNo;
    
    FTextureChange();
};


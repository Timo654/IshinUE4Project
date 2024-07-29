#pragma once
#include "CoreMinimal.h"
#include "UIItemAbilityIconPresetDataRecord.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FUIItemAbilityIconPresetDataRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    LIKEADRAGONISHIN_API FUIItemAbilityIconPresetDataRecord();
};


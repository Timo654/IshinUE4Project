#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UIItemAbilityIconPresetData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FUIItemAbilityIconPresetData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    LIKEADRAGONISHIN_API FUIItemAbilityIconPresetData();
};


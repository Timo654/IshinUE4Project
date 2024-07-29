#pragma once
#include "CoreMinimal.h"
#include "ButtonSetData.generated.h"

class UMacanUserWidget_MngKaraokeButton;

USTRUCT(BlueprintType)
struct FButtonSetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_MngKaraokeButton* pCSEButton;
    
    LIKEADRAGONISHIN_API FButtonSetData();
};


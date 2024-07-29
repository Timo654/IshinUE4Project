#pragma once
#include "CoreMinimal.h"
#include "ListItem.generated.h"

USTRUCT(BlueprintType)
struct FListItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText text1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText text2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_visible;
    
    LIKEADRAGONISHIN_API FListItem();
};


#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PokerUIText.generated.h"

USTRUCT(BlueprintType)
struct FPokerUIText : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText pokerText;
    
    LIKEADRAGONISHIN_API FPokerUIText();
};


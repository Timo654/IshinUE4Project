#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETrunpNumber.h"
#include "ETrunpSuit.h"
#include "PokerCardData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPokerCardData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* pCardTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrunpSuit suit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrunpNumber Number;
    
    LIKEADRAGONISHIN_API FPokerCardData();
};


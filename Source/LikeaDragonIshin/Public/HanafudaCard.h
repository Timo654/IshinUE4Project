#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHanafudaCardKind.h"
#include "EHanafudaCardRank.h"
#include "HanafudaCard.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FHanafudaCard : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHanafudaCardKind CardKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* pCardTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* pKabuCardTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHanafudaCardRank CardRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CardMonth;
    
    LIKEADRAGONISHIN_API FHanafudaCard();
};


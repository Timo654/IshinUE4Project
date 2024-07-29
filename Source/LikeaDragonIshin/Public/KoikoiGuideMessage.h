#pragma once
#include "CoreMinimal.h"
#include "EHanafudaAttribute.h"
#include "KoikoiGuideMessage.generated.h"

USTRUCT(BlueprintType)
struct FKoikoiGuideMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool me;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EHanafudaAttribute> Attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Other;
    
    LIKEADRAGONISHIN_API FKoikoiGuideMessage();
};


#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MngKaraokeLyricData.generated.h"

USTRUCT(BlueprintType)
struct FMngKaraokeLyricData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 page;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 line;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString japaneseText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText rubyText;
    
    LIKEADRAGONISHIN_API FMngKaraokeLyricData();
};


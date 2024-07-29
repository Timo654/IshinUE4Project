#pragma once
#include "CoreMinimal.h"
#include "MacanUIData.h"
#include "MacanUIDataKyukyokutougi.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataKyukyokutougi : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CategoryCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DetailCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> DetailNumArray;
    
    UMacanUIDataKyukyokutougi();

};


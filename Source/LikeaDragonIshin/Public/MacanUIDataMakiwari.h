#pragma once
#include "CoreMinimal.h"
#include "MacanUIData.h"
#include "MacanUIDataMakiwari.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataMakiwari : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 newTotal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 newRenzoku;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 nowTotal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 nowRenzoku;
    
    UMacanUIDataMakiwari();

    UFUNCTION(BlueprintCallable)
    void UpdateCount();
    
};


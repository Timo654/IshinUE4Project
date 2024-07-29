#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BtlCtrlTypeData.h"
#include "EBtlCtrlType.h"
#include "BtlCtrlTypeDataAsset.generated.h"

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UBtlCtrlTypeDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBtlCtrlType, FBtlCtrlTypeData> CtrlTypeDataMap;
    
    UBtlCtrlTypeDataAsset();

    UFUNCTION(BlueprintCallable)
    void Import();
    
    UFUNCTION(BlueprintCallable)
    void AddNotExistAllElement();
    
};


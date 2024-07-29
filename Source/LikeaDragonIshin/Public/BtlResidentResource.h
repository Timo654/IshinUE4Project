#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BtlResidentResource.generated.h"

class UBtlCtrlTypeDataAsset;

UCLASS(Abstract, Blueprintable)
class LIKEADRAGONISHIN_API ABtlResidentResource : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBtlCtrlTypeDataAsset* CtrlTypeDataAsset_;
    
    ABtlResidentResource(const FObjectInitializer& ObjectInitializer);

};


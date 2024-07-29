#pragma once
#include "CoreMinimal.h"
#include "PtcPoolInfo.generated.h"

class UNiagaraComponent;

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FPtcPoolInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NiagaraComponent;
    
    FPtcPoolInfo();
};


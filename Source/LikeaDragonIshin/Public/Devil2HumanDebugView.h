#pragma once
#include "CoreMinimal.h"
#include "DebugHaoriChange.h"
#include "DebugHumanParam.h"
#include "Devil2Human.h"
#include "Devil2HumanDebugView.generated.h"

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API ADevil2HumanDebugView : public ADevil2Human {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDebugLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDebugHumanParam DebugParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugHaoriChange HaoriChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool MatFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MatSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableLoadMerge;
    
    ADevil2HumanDebugView(const FObjectInitializer& ObjectInitializer);

};


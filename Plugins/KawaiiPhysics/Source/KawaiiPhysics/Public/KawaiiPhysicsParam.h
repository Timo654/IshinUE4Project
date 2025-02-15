#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AnimNode_KawaiiPhysics.h"
#include "KawaiiPhysicsInParam.h"
#include "KawaiiPhysicsParam.generated.h"

UCLASS(Blueprintable)
class KAWAIIPHYSICS_API UKawaiiPhysicsParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKawaiiPhysicsInParam> Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SwitchConditionName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCapsuleLimit> CapsuleCache;
    
    UKawaiiPhysicsParam();

};


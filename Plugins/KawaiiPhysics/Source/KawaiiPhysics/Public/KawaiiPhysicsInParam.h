#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "AnimNode_KawaiiPhysics.h"
#include "KawaiiPhysicsInParam.generated.h"

USTRUCT(BlueprintType)
struct KAWAIIPHYSICS_API FKawaiiPhysicsInParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference RootBone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKawaiiPhysicsModifyBone> ModifyBones;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCapsuleLimit> CapsuleLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCapsuleLimitEject> CollisionEjects;
    
    FKawaiiPhysicsInParam();
};


#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ActionSetType.h"
#include "MotionSetDataAsset.generated.h"

class UAnimMontage;
class UAnimSequence;
class UBlendSpaceBase;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UMotionSetDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FActionSetType, UAnimMontage*> AnimMontageDataMap_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FActionSetType, UAnimSequence*> AnimSequenceDataMap_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FActionSetType, UBlendSpaceBase*> BlendSpaceDataMap_;
    
    UMotionSetDataAsset();

};


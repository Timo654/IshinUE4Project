#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MotionSetInfo.h"
#include "MotionSetType.h"
#include "ActionSetDataAsset.generated.h"

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UActionSetDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMotionSetType, FMotionSetInfo> MotionSetMap_;
    
    UActionSetDataAsset();

};


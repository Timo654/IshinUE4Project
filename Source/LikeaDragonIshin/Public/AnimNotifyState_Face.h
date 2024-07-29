#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EFacePatternType.h"
#include "AnimNotifyState_Face.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class LIKEADRAGONISHIN_API UAnimNotifyState_Face : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFacePatternType FacePattern_;
    
public:
    UAnimNotifyState_Face();

};


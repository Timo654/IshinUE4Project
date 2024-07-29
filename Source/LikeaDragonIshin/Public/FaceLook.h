#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FaceLook.generated.h"

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UFaceLook : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FTransform> BoneSpaceTransforms;
    
public:
    UFaceLook();

    UFUNCTION(BlueprintCallable)
    void SetLookFacePos(FVector look_pos, float ratio);
    
    UFUNCTION(BlueprintCallable)
    void Enable(bool is_enable, int32 Index, bool using_trans_info, bool force_update_info);
    
};


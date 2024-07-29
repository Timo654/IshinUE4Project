#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_PlayFrameTbl.h"
#include "DiEventParams_HactPlayFrame.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_HactPlayFrame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDiEventParams_PlayFrameTbl> play_frame_tbl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float chain_camera_in;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float chain_camera_out;
    
    LIKEADRAGONISHIN_API FDiEventParams_HactPlayFrame();
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "e_auto_pad_type.h"
#include "auto_path_command_t.generated.h"

USTRUCT(BlueprintType)
struct Fauto_path_command_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 pos_r;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString scenario;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString stage;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    e_auto_pad_type pad_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float wait_sec;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 button_now;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _ver;
    
    LIKEADRAGONISHIN_API Fauto_path_command_t();
};


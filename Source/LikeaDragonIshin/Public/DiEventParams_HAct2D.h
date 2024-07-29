#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_HAct2D.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_HAct2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString tex_name_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString tex_name_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString middle_file_tex_path_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString middle_file_tex_path_1;
    
    LIKEADRAGONISHIN_API FDiEventParams_HAct2D();
};


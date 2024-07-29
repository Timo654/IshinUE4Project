#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_HactSystemSettings.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_HactSystemSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool play_fixed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString auth_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString sound_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool disable_chara_light;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool hide_all_fighters;
    
    LIKEADRAGONISHIN_API FDiEventParams_HactSystemSettings();
};


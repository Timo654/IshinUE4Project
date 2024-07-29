#pragma once
#include "CoreMinimal.h"
#include "SkyCreatorExposureSettings.generated.h"

USTRUCT(BlueprintType)
struct FSkyCreatorExposureSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExposureCompensation;
    
    SKYCREATORPLUGIN_API FSkyCreatorExposureSettings();
};


#pragma once
#include "CoreMinimal.h"
#include "SkyCreatorExponentialHeightFogSettings.h"
#include "SkyCreatorExposureSettings.h"
#include "SkyCreatorMoonLightSettings.h"
#include "SkyCreatorSkyAtmosphereSettings.h"
#include "SkyCreatorSkyLightSettings.h"
#include "SkyCreatorStarMapSettings.h"
#include "SkyCreatorSunLightSettings.h"
#include "SkyCreatorVolumetricCloudSettings.h"
#include "SkyCreatorWeatherFXSettings.h"
#include "SkyCreatorWindSettings.h"
#include "SkyCreatorWeatherSettings.generated.h"

USTRUCT(BlueprintType)
struct FSkyCreatorWeatherSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkyCreatorSkyAtmosphereSettings SkyAtmosphereSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkyCreatorVolumetricCloudSettings VolumetricCloudSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkyCreatorSkyLightSettings SkyLightSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkyCreatorSunLightSettings SunLightSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkyCreatorMoonLightSettings MoonLightSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkyCreatorExponentialHeightFogSettings ExponentialHeightFogSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkyCreatorStarMapSettings StarMapSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkyCreatorWeatherFXSettings WeatherFXSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkyCreatorWindSettings WindSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkyCreatorExposureSettings ExposureSettings;
    
    SKYCREATORPLUGIN_API FSkyCreatorWeatherSettings();
};


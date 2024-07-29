#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "CharacterLightSettings.h"
#include "CharacterLightVolume.generated.h"

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API ACharacterLightVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterLightSettings Settings;
    
    ACharacterLightVolume(const FObjectInitializer& ObjectInitializer);

};


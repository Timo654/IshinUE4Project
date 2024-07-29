#pragma once
#include "CoreMinimal.h"
#include "EKeyconfigSceneID.h"
#include "EPadButton.h"
#include "KeyconfigSceneSetting.generated.h"

USTRUCT(BlueprintType)
struct FKeyconfigSceneSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKeyconfigSceneID Scene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPadButton> systemOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> stickIcons_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> stickIcons_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool stickSwitchLeftHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool stickSwitchRightHand;
    
    LIKEADRAGONISHIN_API FKeyconfigSceneSetting();
};


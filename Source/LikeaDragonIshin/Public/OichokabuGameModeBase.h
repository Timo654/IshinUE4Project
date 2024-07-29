#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "EOichokabuLevel.h"
#include "OichokabuGameModeBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class AOichokabuGameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isDoshippinEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isShirokunonigeEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isUseKabufuda;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOichokabuLevel Level;
    
    AOichokabuGameModeBase(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "ActionMinigame.h"
#include "ActionKyoukei.generated.h"

class AKyoukeiManager;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UActionKyoukei : public UActionMinigame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AKyoukeiManager* mp_manager;
    
public:
    UActionKyoukei();

};


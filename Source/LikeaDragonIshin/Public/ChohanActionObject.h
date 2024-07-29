#pragma once
#include "CoreMinimal.h"
#include "ActionMinigame.h"
#include "ChohanActionObject.generated.h"

class AChohanGameState;

UCLASS(Blueprintable)
class UChohanActionObject : public UActionMinigame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AChohanGameState* ChohanState;
    
    UChohanActionObject();

};


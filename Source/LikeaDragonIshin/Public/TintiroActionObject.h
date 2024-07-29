#pragma once
#include "CoreMinimal.h"
#include "ActionMinigame.h"
#include "TintiroActionObject.generated.h"

class ATintiroManager;

UCLASS(Blueprintable)
class UTintiroActionObject : public UActionMinigame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATintiroManager* m_pManager;
    
public:
    UTintiroActionObject();

};


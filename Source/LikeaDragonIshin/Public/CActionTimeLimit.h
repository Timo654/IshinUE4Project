#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "CActionTimeLimit.generated.h"

class UMacanUserWidget_Timer;

UCLASS(Blueprintable)
class UCActionTimeLimit : public UActionObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_Timer* m_pTimer;
    
public:
    UCActionTimeLimit();

};


#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionAuth.generated.h"

class ADiEventSequenceActor;

UCLASS(Blueprintable)
class UActionAuth : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADiEventSequenceActor* m_AuthSequenceActor;
    
public:
    UActionAuth();

};


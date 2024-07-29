#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionStartCaption.generated.h"

class ACaptionSequenceActor;

UCLASS(Blueprintable)
class UActionStartCaption : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACaptionSequenceActor* SequenceActor;
    
public:
    UActionStartCaption();

};


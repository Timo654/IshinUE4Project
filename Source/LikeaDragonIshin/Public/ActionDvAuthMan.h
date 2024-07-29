#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionDvAuthMan.generated.h"

class UAuthIns;

UCLASS(Blueprintable)
class UActionDvAuthMan : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAuthIns* m_ins_exec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAuthIns* m_ins_play;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAuthIns* m_ins_end;
    
public:
    UActionDvAuthMan();

};


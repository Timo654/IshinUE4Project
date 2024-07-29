#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionPauseMan.generated.h"

class UPauseManListener;

UCLASS(Blueprintable)
class UActionPauseMan : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPauseManListener* m_plistener;
    
public:
    UActionPauseMan();

};


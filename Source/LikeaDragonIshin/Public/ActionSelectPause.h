#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionSelectPause.generated.h"

class USelectPauseListener;

UCLASS(Blueprintable)
class UActionSelectPause : public UActionObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USelectPauseListener* m_plistener;
    
    UActionSelectPause();

};

